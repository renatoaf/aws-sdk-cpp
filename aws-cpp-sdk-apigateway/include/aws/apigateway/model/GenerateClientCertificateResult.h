﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a Client Certificate used to configure client-side SSL
   * authentication while sending requests to the integration endpoint.</p>
   */
  class AWS_APIGATEWAY_API GenerateClientCertificateResult
  {
  public:
    GenerateClientCertificateResult();
    GenerateClientCertificateResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GenerateClientCertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateId = value; }

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateId = value; }

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline GenerateClientCertificateResult& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline GenerateClientCertificateResult& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of the Client Certificate.</p>
     */
    inline GenerateClientCertificateResult& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline GenerateClientCertificateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline GenerateClientCertificateResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Client Certificate.</p>
     */
    inline GenerateClientCertificateResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline const Aws::String& GetPemEncodedCertificate() const{ return m_pemEncodedCertificate; }

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline void SetPemEncodedCertificate(const Aws::String& value) { m_pemEncodedCertificate = value; }

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline void SetPemEncodedCertificate(Aws::String&& value) { m_pemEncodedCertificate = value; }

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline void SetPemEncodedCertificate(const char* value) { m_pemEncodedCertificate.assign(value); }

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline GenerateClientCertificateResult& WithPemEncodedCertificate(const Aws::String& value) { SetPemEncodedCertificate(value); return *this;}

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline GenerateClientCertificateResult& WithPemEncodedCertificate(Aws::String&& value) { SetPemEncodedCertificate(value); return *this;}

    /**
     * <p>The PEM-encoded public key of the Client Certificate, that can be used to
     * configure certificate authentication in the integration endpoint .</p>
     */
    inline GenerateClientCertificateResult& WithPemEncodedCertificate(const char* value) { SetPemEncodedCertificate(value); return *this;}

    /**
     * <p>The date when the Client Certificate was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the Client Certificate was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date when the Client Certificate was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    /**
     * <p>The date when the Client Certificate was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline GenerateClientCertificateResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the Client Certificate was created, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline GenerateClientCertificateResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the Client Certificate will expire, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date when the Client Certificate will expire, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }

    /**
     * <p>The date when the Client Certificate will expire, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = value; }

    /**
     * <p>The date when the Client Certificate will expire, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline GenerateClientCertificateResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date when the Client Certificate will expire, in <a
     * href="http://www.iso.org/iso/home/standards/iso8601.htm" target="_blank">ISO
     * 8601 format</a>.</p>
     */
    inline GenerateClientCertificateResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(value); return *this;}

  private:
    Aws::String m_clientCertificateId;
    Aws::String m_description;
    Aws::String m_pemEncodedCertificate;
    Aws::Utils::DateTime m_createdDate;
    Aws::Utils::DateTime m_expirationDate;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
