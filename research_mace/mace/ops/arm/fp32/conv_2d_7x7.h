// Copyright 2019 The MACE Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MACE_OPS_ARM_FP32_CONV_2D_7X7_H_
#define MACE_OPS_ARM_FP32_CONV_2D_7X7_H_

#include <vector>
#include "mace/public/mace.h"
#include "mace/core/tensor.h"
#include "mace/core/op_context.h"
#include "mace/ops/arm/fp32/conv_2d.h"

namespace mace {
namespace ops {
namespace arm {
namespace fp32 {

class Conv2dK7x7S1 : public Conv2dBase {
 public:
  Conv2dK7x7S1(const std::vector<int> &paddings, const Padding padding_type)
      : Conv2dBase({1, 1}, {1, 1}, paddings, padding_type) {}
  virtual ~Conv2dK7x7S1() {}

  MaceStatus Compute(
      const OpContext *context,
      const Tensor *input,
      const Tensor *filter,
      Tensor *output) override;
};

class Conv2dK7x7S2 : public Conv2dBase {
 public:
  Conv2dK7x7S2(const std::vector<int> &paddings, const Padding padding_type)
      : Conv2dBase({2, 2}, {1, 1}, paddings, padding_type) {}
  virtual ~Conv2dK7x7S2() {}

  MaceStatus Compute(
      const OpContext *context,
      const Tensor *input,
      const Tensor *filter,
      Tensor *output) override;
};

class Conv2dK7x7S3 : public Conv2dBase {
 public:
  Conv2dK7x7S3(const std::vector<int> &paddings, const Padding padding_type)
      : Conv2dBase({3, 3}, {1, 1}, paddings, padding_type) {}
  virtual ~Conv2dK7x7S3() {}

  MaceStatus Compute(
      const OpContext *context,
      const Tensor *input,
      const Tensor *filter,
      Tensor *output) override;
};

}  // namespace fp32
}  // namespace arm
}  // namespace ops
}  // namespace mace

#endif  // MACE_OPS_ARM_FP32_CONV_2D_7X7_H_
