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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/DocumentType.h>
#include <aws/ssm/model/DocumentFormat.h>
#include <aws/ssm/model/DocumentRequires.h>
#include <aws/ssm/model/AttachmentsSource.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreateDocumentRequest : public SSMRequest
  {
  public:
    CreateDocumentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocument"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline CreateDocumentRequest& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline CreateDocumentRequest& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content for the new SSM document in JSON or YAML format. We recommend
     * storing the contents for your new document in an external JSON or YAML file and
     * referencing the file in a command.</p> <p>For examples, see the following topics
     * in the <i>AWS Systems Manager User Guide</i>.</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-console.html">Create
     * an SSM document (console)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-cli.html">Create
     * an SSM document (AWS CLI)</a> </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/create-ssm-document-api.html">Create
     * an SSM document (API)</a> </p> </li> </ul>
     */
    inline CreateDocumentRequest& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<DocumentRequires>& GetRequires() const{ return m_requires; }

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline bool RequiresHasBeenSet() const { return m_requiresHasBeenSet; }

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetRequires(const Aws::Vector<DocumentRequires>& value) { m_requiresHasBeenSet = true; m_requires = value; }

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline void SetRequires(Aws::Vector<DocumentRequires>&& value) { m_requiresHasBeenSet = true; m_requires = std::move(value); }

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline CreateDocumentRequest& WithRequires(const Aws::Vector<DocumentRequires>& value) { SetRequires(value); return *this;}

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline CreateDocumentRequest& WithRequires(Aws::Vector<DocumentRequires>&& value) { SetRequires(std::move(value)); return *this;}

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline CreateDocumentRequest& AddRequires(const DocumentRequires& value) { m_requiresHasBeenSet = true; m_requires.push_back(value); return *this; }

    /**
     * <p>A list of SSM documents required by a document. This parameter is used
     * exclusively by AWS AppConfig. When a user creates an AppConfig configuration in
     * an SSM document, the user must also specify a required document for validation
     * purposes. In this case, an <code>ApplicationConfiguration</code> document
     * requires an <code>ApplicationConfigurationSchema</code> document for validation
     * purposes. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS
     * AppConfig</a> in the <i>AWS Systems Manager User Guide</i>.</p>
     */
    inline CreateDocumentRequest& AddRequires(DocumentRequires&& value) { m_requiresHasBeenSet = true; m_requires.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline const Aws::Vector<AttachmentsSource>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline void SetAttachments(const Aws::Vector<AttachmentsSource>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline void SetAttachments(Aws::Vector<AttachmentsSource>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline CreateDocumentRequest& WithAttachments(const Aws::Vector<AttachmentsSource>& value) { SetAttachments(value); return *this;}

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline CreateDocumentRequest& WithAttachments(Aws::Vector<AttachmentsSource>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline CreateDocumentRequest& AddAttachments(const AttachmentsSource& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>A list of key and value pairs that describe attachments to a version of a
     * document.</p>
     */
    inline CreateDocumentRequest& AddAttachments(AttachmentsSource&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline CreateDocumentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline CreateDocumentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the Systems Manager document.</p> <important> <p>You can't use the
     * following strings as document name prefixes. These are reserved by AWS for use
     * as document name prefixes:</p> <ul> <li> <p> <code>aws</code> </p> </li> <li>
     * <p> <code>amazon</code> </p> </li> <li> <p> <code>amzn</code> </p> </li> </ul>
     * </important>
     */
    inline CreateDocumentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline CreateDocumentRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline CreateDocumentRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>An optional field specifying the version of the artifact you are creating
     * with the document. For example, "Release 12, Update 6". This value is unique
     * across all versions of a document, and cannot be changed.</p>
     */
    inline CreateDocumentRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The type of document to create.</p>
     */
    inline const DocumentType& GetDocumentType() const{ return m_documentType; }

    /**
     * <p>The type of document to create.</p>
     */
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }

    /**
     * <p>The type of document to create.</p>
     */
    inline void SetDocumentType(const DocumentType& value) { m_documentTypeHasBeenSet = true; m_documentType = value; }

    /**
     * <p>The type of document to create.</p>
     */
    inline void SetDocumentType(DocumentType&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::move(value); }

    /**
     * <p>The type of document to create.</p>
     */
    inline CreateDocumentRequest& WithDocumentType(const DocumentType& value) { SetDocumentType(value); return *this;}

    /**
     * <p>The type of document to create.</p>
     */
    inline CreateDocumentRequest& WithDocumentType(DocumentType&& value) { SetDocumentType(std::move(value)); return *this;}


    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline const DocumentFormat& GetDocumentFormat() const{ return m_documentFormat; }

    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline bool DocumentFormatHasBeenSet() const { return m_documentFormatHasBeenSet; }

    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(const DocumentFormat& value) { m_documentFormatHasBeenSet = true; m_documentFormat = value; }

    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline void SetDocumentFormat(DocumentFormat&& value) { m_documentFormatHasBeenSet = true; m_documentFormat = std::move(value); }

    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline CreateDocumentRequest& WithDocumentFormat(const DocumentFormat& value) { SetDocumentFormat(value); return *this;}

    /**
     * <p>Specify the document format for the request. The document format can be JSON,
     * YAML, or TEXT. JSON is the default format.</p>
     */
    inline CreateDocumentRequest& WithDocumentFormat(DocumentFormat&& value) { SetDocumentFormat(std::move(value)); return *this;}


    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline CreateDocumentRequest& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline CreateDocumentRequest& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>Specify a target type to define the kinds of resources the document can run
     * on. For example, to run a document on EC2 instances, specify the following
     * value: /AWS::EC2::Instance. If you specify a value of '/' the document can run
     * on all types of resources. If you don't specify a value, the document can't run
     * on any resources. For a list of valid resource types, see <a
     * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">AWS
     * resource and property types reference</a> in the <i>AWS CloudFormation User
     * Guide</i>. </p>
     */
    inline CreateDocumentRequest& WithTargetType(const char* value) { SetTargetType(value); return *this;}


    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline CreateDocumentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline CreateDocumentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline CreateDocumentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Optional metadata that you assign to a resource. Tags enable you to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment. For example, you might want to tag an SSM document to identify the
     * types of targets or the environment where it will run. In this case, you could
     * specify the following key name/value pairs:</p> <ul> <li> <p>
     * <code>Key=OS,Value=Windows</code> </p> </li> <li> <p>
     * <code>Key=Environment,Value=Production</code> </p> </li> </ul> <note> <p>To add
     * tags to an existing SSM document, use the <a>AddTagsToResource</a> action.</p>
     * </note>
     */
    inline CreateDocumentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet;

    Aws::Vector<DocumentRequires> m_requires;
    bool m_requiresHasBeenSet;

    Aws::Vector<AttachmentsSource> m_attachments;
    bool m_attachmentsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet;

    DocumentType m_documentType;
    bool m_documentTypeHasBeenSet;

    DocumentFormat m_documentFormat;
    bool m_documentFormatHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
