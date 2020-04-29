﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/TranscribeServiceEndpoint.h>
#include <aws/transcribe/TranscribeServiceErrorMarshaller.h>
#include <aws/transcribe/model/CreateMedicalVocabularyRequest.h>
#include <aws/transcribe/model/CreateVocabularyRequest.h>
#include <aws/transcribe/model/CreateVocabularyFilterRequest.h>
#include <aws/transcribe/model/DeleteMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteMedicalVocabularyRequest.h>
#include <aws/transcribe/model/DeleteTranscriptionJobRequest.h>
#include <aws/transcribe/model/DeleteVocabularyRequest.h>
#include <aws/transcribe/model/DeleteVocabularyFilterRequest.h>
#include <aws/transcribe/model/GetMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetMedicalVocabularyRequest.h>
#include <aws/transcribe/model/GetTranscriptionJobRequest.h>
#include <aws/transcribe/model/GetVocabularyRequest.h>
#include <aws/transcribe/model/GetVocabularyFilterRequest.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListMedicalVocabulariesRequest.h>
#include <aws/transcribe/model/ListTranscriptionJobsRequest.h>
#include <aws/transcribe/model/ListVocabulariesRequest.h>
#include <aws/transcribe/model/ListVocabularyFiltersRequest.h>
#include <aws/transcribe/model/StartMedicalTranscriptionJobRequest.h>
#include <aws/transcribe/model/StartTranscriptionJobRequest.h>
#include <aws/transcribe/model/UpdateMedicalVocabularyRequest.h>
#include <aws/transcribe/model/UpdateVocabularyRequest.h>
#include <aws/transcribe/model/UpdateVocabularyFilterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TranscribeService;
using namespace Aws::TranscribeService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "transcribe";
static const char* ALLOCATION_TAG = "TranscribeServiceClient";


TranscribeServiceClient::TranscribeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::TranscribeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TranscribeServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranscribeServiceClient::~TranscribeServiceClient()
{
}

void TranscribeServiceClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TranscribeServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TranscribeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateMedicalVocabularyOutcome TranscribeServiceClient::CreateMedicalVocabulary(const CreateMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMedicalVocabularyOutcome(CreateMedicalVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return CreateMedicalVocabularyOutcome(outcome.GetError());
  }
}

CreateMedicalVocabularyOutcomeCallable TranscribeServiceClient::CreateMedicalVocabularyCallable(const CreateMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateMedicalVocabularyAsync(const CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMedicalVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::CreateMedicalVocabularyAsyncHelper(const CreateMedicalVocabularyRequest& request, const CreateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMedicalVocabulary(request), context);
}

CreateVocabularyOutcome TranscribeServiceClient::CreateVocabulary(const CreateVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVocabularyOutcome(CreateVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return CreateVocabularyOutcome(outcome.GetError());
  }
}

CreateVocabularyOutcomeCallable TranscribeServiceClient::CreateVocabularyCallable(const CreateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateVocabularyAsync(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::CreateVocabularyAsyncHelper(const CreateVocabularyRequest& request, const CreateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVocabulary(request), context);
}

CreateVocabularyFilterOutcome TranscribeServiceClient::CreateVocabularyFilter(const CreateVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVocabularyFilterOutcome(CreateVocabularyFilterResult(outcome.GetResult()));
  }
  else
  {
    return CreateVocabularyFilterOutcome(outcome.GetError());
  }
}

CreateVocabularyFilterOutcomeCallable TranscribeServiceClient::CreateVocabularyFilterCallable(const CreateVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::CreateVocabularyFilterAsync(const CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVocabularyFilterAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::CreateVocabularyFilterAsyncHelper(const CreateVocabularyFilterRequest& request, const CreateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVocabularyFilter(request), context);
}

DeleteMedicalTranscriptionJobOutcome TranscribeServiceClient::DeleteMedicalTranscriptionJob(const DeleteMedicalTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMedicalTranscriptionJobOutcome(NoResult());
  }
  else
  {
    return DeleteMedicalTranscriptionJobOutcome(outcome.GetError());
  }
}

DeleteMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteMedicalTranscriptionJobCallable(const DeleteMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteMedicalTranscriptionJobAsync(const DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMedicalTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteMedicalTranscriptionJobAsyncHelper(const DeleteMedicalTranscriptionJobRequest& request, const DeleteMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMedicalTranscriptionJob(request), context);
}

DeleteMedicalVocabularyOutcome TranscribeServiceClient::DeleteMedicalVocabulary(const DeleteMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMedicalVocabularyOutcome(NoResult());
  }
  else
  {
    return DeleteMedicalVocabularyOutcome(outcome.GetError());
  }
}

DeleteMedicalVocabularyOutcomeCallable TranscribeServiceClient::DeleteMedicalVocabularyCallable(const DeleteMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteMedicalVocabularyAsync(const DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMedicalVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteMedicalVocabularyAsyncHelper(const DeleteMedicalVocabularyRequest& request, const DeleteMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMedicalVocabulary(request), context);
}

DeleteTranscriptionJobOutcome TranscribeServiceClient::DeleteTranscriptionJob(const DeleteTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTranscriptionJobOutcome(NoResult());
  }
  else
  {
    return DeleteTranscriptionJobOutcome(outcome.GetError());
  }
}

DeleteTranscriptionJobOutcomeCallable TranscribeServiceClient::DeleteTranscriptionJobCallable(const DeleteTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteTranscriptionJobAsync(const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteTranscriptionJobAsyncHelper(const DeleteTranscriptionJobRequest& request, const DeleteTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTranscriptionJob(request), context);
}

DeleteVocabularyOutcome TranscribeServiceClient::DeleteVocabulary(const DeleteVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVocabularyOutcome(NoResult());
  }
  else
  {
    return DeleteVocabularyOutcome(outcome.GetError());
  }
}

DeleteVocabularyOutcomeCallable TranscribeServiceClient::DeleteVocabularyCallable(const DeleteVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteVocabularyAsync(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteVocabularyAsyncHelper(const DeleteVocabularyRequest& request, const DeleteVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVocabulary(request), context);
}

DeleteVocabularyFilterOutcome TranscribeServiceClient::DeleteVocabularyFilter(const DeleteVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVocabularyFilterOutcome(NoResult());
  }
  else
  {
    return DeleteVocabularyFilterOutcome(outcome.GetError());
  }
}

DeleteVocabularyFilterOutcomeCallable TranscribeServiceClient::DeleteVocabularyFilterCallable(const DeleteVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::DeleteVocabularyFilterAsync(const DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVocabularyFilterAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::DeleteVocabularyFilterAsyncHelper(const DeleteVocabularyFilterRequest& request, const DeleteVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVocabularyFilter(request), context);
}

GetMedicalTranscriptionJobOutcome TranscribeServiceClient::GetMedicalTranscriptionJob(const GetMedicalTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMedicalTranscriptionJobOutcome(GetMedicalTranscriptionJobResult(outcome.GetResult()));
  }
  else
  {
    return GetMedicalTranscriptionJobOutcome(outcome.GetError());
  }
}

GetMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::GetMedicalTranscriptionJobCallable(const GetMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetMedicalTranscriptionJobAsync(const GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMedicalTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetMedicalTranscriptionJobAsyncHelper(const GetMedicalTranscriptionJobRequest& request, const GetMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMedicalTranscriptionJob(request), context);
}

GetMedicalVocabularyOutcome TranscribeServiceClient::GetMedicalVocabulary(const GetMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMedicalVocabularyOutcome(GetMedicalVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return GetMedicalVocabularyOutcome(outcome.GetError());
  }
}

GetMedicalVocabularyOutcomeCallable TranscribeServiceClient::GetMedicalVocabularyCallable(const GetMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetMedicalVocabularyAsync(const GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMedicalVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetMedicalVocabularyAsyncHelper(const GetMedicalVocabularyRequest& request, const GetMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMedicalVocabulary(request), context);
}

GetTranscriptionJobOutcome TranscribeServiceClient::GetTranscriptionJob(const GetTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTranscriptionJobOutcome(GetTranscriptionJobResult(outcome.GetResult()));
  }
  else
  {
    return GetTranscriptionJobOutcome(outcome.GetError());
  }
}

GetTranscriptionJobOutcomeCallable TranscribeServiceClient::GetTranscriptionJobCallable(const GetTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetTranscriptionJobAsync(const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetTranscriptionJobAsyncHelper(const GetTranscriptionJobRequest& request, const GetTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTranscriptionJob(request), context);
}

GetVocabularyOutcome TranscribeServiceClient::GetVocabulary(const GetVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVocabularyOutcome(GetVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return GetVocabularyOutcome(outcome.GetError());
  }
}

GetVocabularyOutcomeCallable TranscribeServiceClient::GetVocabularyCallable(const GetVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetVocabularyAsync(const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetVocabularyAsyncHelper(const GetVocabularyRequest& request, const GetVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVocabulary(request), context);
}

GetVocabularyFilterOutcome TranscribeServiceClient::GetVocabularyFilter(const GetVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVocabularyFilterOutcome(GetVocabularyFilterResult(outcome.GetResult()));
  }
  else
  {
    return GetVocabularyFilterOutcome(outcome.GetError());
  }
}

GetVocabularyFilterOutcomeCallable TranscribeServiceClient::GetVocabularyFilterCallable(const GetVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::GetVocabularyFilterAsync(const GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVocabularyFilterAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::GetVocabularyFilterAsyncHelper(const GetVocabularyFilterRequest& request, const GetVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVocabularyFilter(request), context);
}

ListMedicalTranscriptionJobsOutcome TranscribeServiceClient::ListMedicalTranscriptionJobs(const ListMedicalTranscriptionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMedicalTranscriptionJobsOutcome(ListMedicalTranscriptionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListMedicalTranscriptionJobsOutcome(outcome.GetError());
  }
}

ListMedicalTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListMedicalTranscriptionJobsCallable(const ListMedicalTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMedicalTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMedicalTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListMedicalTranscriptionJobsAsync(const ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMedicalTranscriptionJobsAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListMedicalTranscriptionJobsAsyncHelper(const ListMedicalTranscriptionJobsRequest& request, const ListMedicalTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMedicalTranscriptionJobs(request), context);
}

ListMedicalVocabulariesOutcome TranscribeServiceClient::ListMedicalVocabularies(const ListMedicalVocabulariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMedicalVocabulariesOutcome(ListMedicalVocabulariesResult(outcome.GetResult()));
  }
  else
  {
    return ListMedicalVocabulariesOutcome(outcome.GetError());
  }
}

ListMedicalVocabulariesOutcomeCallable TranscribeServiceClient::ListMedicalVocabulariesCallable(const ListMedicalVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMedicalVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMedicalVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListMedicalVocabulariesAsync(const ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMedicalVocabulariesAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListMedicalVocabulariesAsyncHelper(const ListMedicalVocabulariesRequest& request, const ListMedicalVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMedicalVocabularies(request), context);
}

ListTranscriptionJobsOutcome TranscribeServiceClient::ListTranscriptionJobs(const ListTranscriptionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTranscriptionJobsOutcome(ListTranscriptionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListTranscriptionJobsOutcome(outcome.GetError());
  }
}

ListTranscriptionJobsOutcomeCallable TranscribeServiceClient::ListTranscriptionJobsCallable(const ListTranscriptionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTranscriptionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTranscriptionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListTranscriptionJobsAsync(const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTranscriptionJobsAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListTranscriptionJobsAsyncHelper(const ListTranscriptionJobsRequest& request, const ListTranscriptionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTranscriptionJobs(request), context);
}

ListVocabulariesOutcome TranscribeServiceClient::ListVocabularies(const ListVocabulariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVocabulariesOutcome(ListVocabulariesResult(outcome.GetResult()));
  }
  else
  {
    return ListVocabulariesOutcome(outcome.GetError());
  }
}

ListVocabulariesOutcomeCallable TranscribeServiceClient::ListVocabulariesCallable(const ListVocabulariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabulariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListVocabulariesAsync(const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVocabulariesAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListVocabulariesAsyncHelper(const ListVocabulariesRequest& request, const ListVocabulariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVocabularies(request), context);
}

ListVocabularyFiltersOutcome TranscribeServiceClient::ListVocabularyFilters(const ListVocabularyFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVocabularyFiltersOutcome(ListVocabularyFiltersResult(outcome.GetResult()));
  }
  else
  {
    return ListVocabularyFiltersOutcome(outcome.GetError());
  }
}

ListVocabularyFiltersOutcomeCallable TranscribeServiceClient::ListVocabularyFiltersCallable(const ListVocabularyFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVocabularyFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVocabularyFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::ListVocabularyFiltersAsync(const ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVocabularyFiltersAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::ListVocabularyFiltersAsyncHelper(const ListVocabularyFiltersRequest& request, const ListVocabularyFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVocabularyFilters(request), context);
}

StartMedicalTranscriptionJobOutcome TranscribeServiceClient::StartMedicalTranscriptionJob(const StartMedicalTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartMedicalTranscriptionJobOutcome(StartMedicalTranscriptionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartMedicalTranscriptionJobOutcome(outcome.GetError());
  }
}

StartMedicalTranscriptionJobOutcomeCallable TranscribeServiceClient::StartMedicalTranscriptionJobCallable(const StartMedicalTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMedicalTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMedicalTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::StartMedicalTranscriptionJobAsync(const StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMedicalTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::StartMedicalTranscriptionJobAsyncHelper(const StartMedicalTranscriptionJobRequest& request, const StartMedicalTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMedicalTranscriptionJob(request), context);
}

StartTranscriptionJobOutcome TranscribeServiceClient::StartTranscriptionJob(const StartTranscriptionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartTranscriptionJobOutcome(StartTranscriptionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartTranscriptionJobOutcome(outcome.GetError());
  }
}

StartTranscriptionJobOutcomeCallable TranscribeServiceClient::StartTranscriptionJobCallable(const StartTranscriptionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTranscriptionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTranscriptionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::StartTranscriptionJobAsync(const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartTranscriptionJobAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::StartTranscriptionJobAsyncHelper(const StartTranscriptionJobRequest& request, const StartTranscriptionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTranscriptionJob(request), context);
}

UpdateMedicalVocabularyOutcome TranscribeServiceClient::UpdateMedicalVocabulary(const UpdateMedicalVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMedicalVocabularyOutcome(UpdateMedicalVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMedicalVocabularyOutcome(outcome.GetError());
  }
}

UpdateMedicalVocabularyOutcomeCallable TranscribeServiceClient::UpdateMedicalVocabularyCallable(const UpdateMedicalVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMedicalVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMedicalVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateMedicalVocabularyAsync(const UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMedicalVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::UpdateMedicalVocabularyAsyncHelper(const UpdateMedicalVocabularyRequest& request, const UpdateMedicalVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMedicalVocabulary(request), context);
}

UpdateVocabularyOutcome TranscribeServiceClient::UpdateVocabulary(const UpdateVocabularyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVocabularyOutcome(UpdateVocabularyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVocabularyOutcome(outcome.GetError());
  }
}

UpdateVocabularyOutcomeCallable TranscribeServiceClient::UpdateVocabularyCallable(const UpdateVocabularyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabulary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateVocabularyAsync(const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVocabularyAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::UpdateVocabularyAsyncHelper(const UpdateVocabularyRequest& request, const UpdateVocabularyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVocabulary(request), context);
}

UpdateVocabularyFilterOutcome TranscribeServiceClient::UpdateVocabularyFilter(const UpdateVocabularyFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVocabularyFilterOutcome(UpdateVocabularyFilterResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVocabularyFilterOutcome(outcome.GetError());
  }
}

UpdateVocabularyFilterOutcomeCallable TranscribeServiceClient::UpdateVocabularyFilterCallable(const UpdateVocabularyFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVocabularyFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVocabularyFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranscribeServiceClient::UpdateVocabularyFilterAsync(const UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVocabularyFilterAsyncHelper( request, handler, context ); } );
}

void TranscribeServiceClient::UpdateVocabularyFilterAsyncHelper(const UpdateVocabularyFilterRequest& request, const UpdateVocabularyFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVocabularyFilter(request), context);
}

