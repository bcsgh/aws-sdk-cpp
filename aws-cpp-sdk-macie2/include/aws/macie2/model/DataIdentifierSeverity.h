﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class DataIdentifierSeverity
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace DataIdentifierSeverityMapper
{
AWS_MACIE2_API DataIdentifierSeverity GetDataIdentifierSeverityForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForDataIdentifierSeverity(DataIdentifierSeverity value);
} // namespace DataIdentifierSeverityMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
