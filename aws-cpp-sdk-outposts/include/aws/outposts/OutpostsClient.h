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

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/CreateOutpostResult.h>
#include <aws/outposts/model/GetOutpostResult.h>
#include <aws/outposts/model/GetOutpostInstanceTypesResult.h>
#include <aws/outposts/model/ListOutpostsResult.h>
#include <aws/outposts/model/ListSitesResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Outposts
{

namespace Model
{
        class CreateOutpostRequest;
        class GetOutpostRequest;
        class GetOutpostInstanceTypesRequest;
        class ListOutpostsRequest;
        class ListSitesRequest;

        typedef Aws::Utils::Outcome<CreateOutpostResult, Aws::Client::AWSError<OutpostsErrors>> CreateOutpostOutcome;
        typedef Aws::Utils::Outcome<GetOutpostResult, Aws::Client::AWSError<OutpostsErrors>> GetOutpostOutcome;
        typedef Aws::Utils::Outcome<GetOutpostInstanceTypesResult, Aws::Client::AWSError<OutpostsErrors>> GetOutpostInstanceTypesOutcome;
        typedef Aws::Utils::Outcome<ListOutpostsResult, Aws::Client::AWSError<OutpostsErrors>> ListOutpostsOutcome;
        typedef Aws::Utils::Outcome<ListSitesResult, Aws::Client::AWSError<OutpostsErrors>> ListSitesOutcome;

        typedef std::future<CreateOutpostOutcome> CreateOutpostOutcomeCallable;
        typedef std::future<GetOutpostOutcome> GetOutpostOutcomeCallable;
        typedef std::future<GetOutpostInstanceTypesOutcome> GetOutpostInstanceTypesOutcomeCallable;
        typedef std::future<ListOutpostsOutcome> ListOutpostsOutcomeCallable;
        typedef std::future<ListSitesOutcome> ListSitesOutcomeCallable;
} // namespace Model

  class OutpostsClient;

    typedef std::function<void(const OutpostsClient*, const Model::CreateOutpostRequest&, const Model::CreateOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOutpostRequest&, const Model::GetOutpostOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutpostResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::GetOutpostInstanceTypesRequest&, const Model::GetOutpostInstanceTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutpostInstanceTypesResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListOutpostsRequest&, const Model::ListOutpostsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOutpostsResponseReceivedHandler;
    typedef std::function<void(const OutpostsClient*, const Model::ListSitesRequest&, const Model::ListSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSitesResponseReceivedHandler;

  /**
   * <p>AWS Outposts is a fully-managed service that extends AWS infrastructure,
   * APIs, and tools to customer premises. By providing local access to AWS-managed
   * infrastructure, AWS Outposts enables customers to build and run applications on
   * premises using the same programming interfaces as in AWS Regions, while using
   * local compute and storage resources for lower latency and local data processing
   * needs.</p>
   */
  class AWS_OUTPOSTS_API OutpostsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OutpostsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~OutpostsClient();

        inline virtual const char* GetServiceClientName() const override { return "Outposts"; }


        /**
         * <p>Creates an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutpostOutcome CreateOutpost(const Model::CreateOutpostRequest& request) const;

        /**
         * <p>Creates an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOutpost">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOutpostOutcomeCallable CreateOutpostCallable(const Model::CreateOutpostRequest& request) const;

        /**
         * <p>Creates an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/CreateOutpost">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOutpostAsync(const Model::CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpost">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostOutcome GetOutpost(const Model::GetOutpostRequest& request) const;

        /**
         * <p>Gets information about the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpost">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOutpostOutcomeCallable GetOutpostCallable(const Model::GetOutpostRequest& request) const;

        /**
         * <p>Gets information about the specified Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpost">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOutpostAsync(const Model::GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the instance types for the specified Outpost.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpostInstanceTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostInstanceTypesOutcome GetOutpostInstanceTypes(const Model::GetOutpostInstanceTypesRequest& request) const;

        /**
         * <p>Lists the instance types for the specified Outpost.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpostInstanceTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOutpostInstanceTypesOutcomeCallable GetOutpostInstanceTypesCallable(const Model::GetOutpostInstanceTypesRequest& request) const;

        /**
         * <p>Lists the instance types for the specified Outpost.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/GetOutpostInstanceTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOutpostInstanceTypesAsync(const Model::GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the Outposts for your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOutposts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutpostsOutcome ListOutposts(const Model::ListOutpostsRequest& request) const;

        /**
         * <p>List the Outposts for your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOutposts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOutpostsOutcomeCallable ListOutpostsCallable(const Model::ListOutpostsRequest& request) const;

        /**
         * <p>List the Outposts for your AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListOutposts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOutpostsAsync(const Model::ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the sites for the specified AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListSites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSitesOutcome ListSites(const Model::ListSitesRequest& request) const;

        /**
         * <p>Lists the sites for the specified AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListSites">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSitesOutcomeCallable ListSitesCallable(const Model::ListSitesRequest& request) const;

        /**
         * <p>Lists the sites for the specified AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ListSites">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSitesAsync(const Model::ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateOutpostAsyncHelper(const Model::CreateOutpostRequest& request, const CreateOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOutpostAsyncHelper(const Model::GetOutpostRequest& request, const GetOutpostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOutpostInstanceTypesAsyncHelper(const Model::GetOutpostInstanceTypesRequest& request, const GetOutpostInstanceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOutpostsAsyncHelper(const Model::ListOutpostsRequest& request, const ListOutpostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSitesAsyncHelper(const Model::ListSitesRequest& request, const ListSitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Outposts
} // namespace Aws
