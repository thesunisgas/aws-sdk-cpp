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

#include <aws/outposts/OutpostsClient.h>
#include <aws/outposts/OutpostsEndpoint.h>
#include <aws/outposts/OutpostsErrorMarshaller.h>
#include <aws/outposts/model/CreateOutpostRequest.h>
#include <aws/outposts/model/GetOutpostRequest.h>
#include <aws/outposts/model/GetOutpostInstanceTypesRequest.h>
#include <aws/outposts/model/ListOutpostsRequest.h>
#include <aws/outposts/model/ListSitesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Outposts;
using namespace Aws::Outposts::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "outposts";
static const char* ALLOCATION_TAG = "OutpostsClient";


OutpostsClient::OutpostsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OutpostsClient::OutpostsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OutpostsClient::OutpostsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<OutpostsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

OutpostsClient::~OutpostsClient()
{
}

void OutpostsClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + OutpostsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void OutpostsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateOutpostOutcome OutpostsClient::CreateOutpost(const CreateOutpostRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/outposts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateOutpostOutcome(CreateOutpostResult(outcome.GetResult()));
  }
  else
  {
    return CreateOutpostOutcome(outcome.GetError());
  }
}

CreateOutpostOutcomeCallable OutpostsClient::CreateOutpostCallable(const CreateOutpostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOutpostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOutpost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::CreateOutpostAsync(const CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOutpostAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::CreateOutpostAsyncHelper(const CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOutpost(request), context);
}

GetOutpostOutcome OutpostsClient::GetOutpost(const GetOutpostRequest& request) const
{
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOutpost", "Required field: OutpostId, is not set");
    return GetOutpostOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/outposts/";
  ss << request.GetOutpostId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOutpostOutcome(GetOutpostResult(outcome.GetResult()));
  }
  else
  {
    return GetOutpostOutcome(outcome.GetError());
  }
}

GetOutpostOutcomeCallable OutpostsClient::GetOutpostCallable(const GetOutpostRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOutpostOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOutpost(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetOutpostAsync(const GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOutpostAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetOutpostAsyncHelper(const GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOutpost(request), context);
}

GetOutpostInstanceTypesOutcome OutpostsClient::GetOutpostInstanceTypes(const GetOutpostInstanceTypesRequest& request) const
{
  if (!request.OutpostIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOutpostInstanceTypes", "Required field: OutpostId, is not set");
    return GetOutpostInstanceTypesOutcome(Aws::Client::AWSError<OutpostsErrors>(OutpostsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutpostId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/outposts/";
  ss << request.GetOutpostId();
  ss << "/instanceTypes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOutpostInstanceTypesOutcome(GetOutpostInstanceTypesResult(outcome.GetResult()));
  }
  else
  {
    return GetOutpostInstanceTypesOutcome(outcome.GetError());
  }
}

GetOutpostInstanceTypesOutcomeCallable OutpostsClient::GetOutpostInstanceTypesCallable(const GetOutpostInstanceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOutpostInstanceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOutpostInstanceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::GetOutpostInstanceTypesAsync(const GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOutpostInstanceTypesAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::GetOutpostInstanceTypesAsyncHelper(const GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOutpostInstanceTypes(request), context);
}

ListOutpostsOutcome OutpostsClient::ListOutposts(const ListOutpostsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/outposts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOutpostsOutcome(ListOutpostsResult(outcome.GetResult()));
  }
  else
  {
    return ListOutpostsOutcome(outcome.GetError());
  }
}

ListOutpostsOutcomeCallable OutpostsClient::ListOutpostsCallable(const ListOutpostsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOutpostsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOutposts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListOutpostsAsync(const ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOutpostsAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListOutpostsAsyncHelper(const ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOutposts(request), context);
}

ListSitesOutcome OutpostsClient::ListSites(const ListSitesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sites";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSitesOutcome(ListSitesResult(outcome.GetResult()));
  }
  else
  {
    return ListSitesOutcome(outcome.GetError());
  }
}

ListSitesOutcomeCallable OutpostsClient::ListSitesCallable(const ListSitesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void OutpostsClient::ListSitesAsync(const ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListSitesAsyncHelper( request, handler, context ); } );
}

void OutpostsClient::ListSitesAsyncHelper(const ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSites(request), context);
}

