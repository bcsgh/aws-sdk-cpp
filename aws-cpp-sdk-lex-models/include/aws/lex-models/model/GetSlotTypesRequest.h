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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypesRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetSlotTypesRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline GetSlotTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline GetSlotTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch next page of slot types, specify the pagination token in the
     * next request.</p>
     */
    inline GetSlotTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline GetSlotTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline GetSlotTypesRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline GetSlotTypesRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Substring to match in slot type names. A slot type will be returned if any
     * part of its name matches the substring. For example, "xyz" matches both "xyzabc"
     * and "abcxyz."</p>
     */
    inline GetSlotTypesRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
