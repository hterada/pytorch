#include <torch/csrc/lazy/core/internal_ops/ltc_ops.h>

namespace torch {
namespace lazy {

const OpKindWrapper ltc_all_to_all("lazy_tensors::all_to_all");
const OpKindWrapper ltc_cast("lazy_tensors::cast");
const OpKindWrapper ltc_collective_permute("lazy_tensors::collective_permute");
const OpKindWrapper ltc_cross_replica_sum("lazy_tensors::cross_replica_sum");
const OpKindWrapper ltc_device_data("lazy_tensors::device_data");
const OpKindWrapper ltc_get_dimensions_size(
    "lazy_tensors::ltc_get_dimensions_size");
const OpKindWrapper ltc_moving_average("lazy_tensors::moving_average");
const OpKindWrapper ltc_nms("lazy_tensors::nms");
const OpKindWrapper ltc_not_supported("lazy_tensors::not_supported");
const OpKindWrapper ltc_replication_pad("lazy_tensors::replication_pad");
const OpKindWrapper ltc_replication_pad_backward(
    "lazy_tensors::replication_pad_backward");
const OpKindWrapper ltc_tensor_data("lazy_tensors::tensor_data");

// For view ops
const OpKindWrapper ltc_as_strided_view_update(
    "lazy_tensors::as_strided_view_update");
const OpKindWrapper ltc_diagonal_view_update(
    "lazy_tensors::diagonal_view_update");
const OpKindWrapper ltc_narrow_view_update("lazy_tensors::narrow_view_update");
const OpKindWrapper ltc_select_view_update("lazy_tensors::select_view_update");

} // namespace lazy
} // namespace torch
