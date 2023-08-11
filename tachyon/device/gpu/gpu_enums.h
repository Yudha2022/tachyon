#ifndef TACHYON_DEVICE_GPU_GPU_ENUMS_H_
#define TACHYON_DEVICE_GPU_GPU_ENUMS_H_

#if TACHYON_CUDA
#include "third_party/gpus/cuda/include/cuda_runtime_api.h"
#endif  // TACHYON_CUDA

// clang-format off
#if TACHYON_CUDA
#define gpuSuccess cudaSuccess

// cudaMemcpyKind
#define gpuMemcpyHostToHost cudaMemcpyHostToHost
#define gpuMemcpyHostToDevice cudaMemcpyHostToDevice
#define gpuMemcpyDeviceToHost cudaMemcpyDeviceToHost
#define gpuMemcpyDeviceToDevice cudaMemcpyDeviceToDevice
#define gpuMemcpyDefault cudaMemcpyDefault

// cudaMemAllocationHandleType
#define gpuMemAllocationTypeInvalid cudaMemAllocationTypeInvalid
#define gpuMemAllocationTypePinned cudaMemAllocationTypePinned
#define gpuMemAllocationTypeMax cudaMemAllocationTypeMax

// cudaMemHandleType
#define gpuMemHandleTypeNone cudaMemHandleTypeNone
#define gpuMemHandleTypePosixFileDescriptor cudaMemHandleTypePosixFileDescriptor
#define gpuMemHandleTypeWin32 cudaMemHandleTypeWin32
#define gpuMemHandleTypeWin32Kmt cudaMemHandleTypeWin32Kmt

// cudaMemLocationType
#define gpuMemLocationTypeInvalid cudaMemLocationTypeInvalid
#define gpuMemLocationTypeDevice cudaMemLocationTypeDevice

// cudaMemPoolAttr
#define gpuMemPoolReuseFollowEventDependencies cudaMemPoolReuseFollowEventDependencies
#define gpuMemPoolReuseAllowOpportunistic cudaMemPoolReuseAllowOpportunistic
#define gpuMemPoolReuseAllowInternalDependencies cudaMemPoolReuseAllowInternalDependencies
#define gpuMemPoolAttrReleaseThreshold cudaMemPoolAttrReleaseThreshold
#define gpuMemPoolAttrReservedMemCurrent cudaMemPoolAttrReservedMemCurrent
#define gpuMemPoolAttrReservedMemHigh cudaMemPoolAttrReservedMemHigh
#define gpuMemPoolAttrUsedMemCurrent cudaMemPoolAttrUsedMemCurrent
#define gpuMemPoolAttrUsedMemHigh cudaMemPoolAttrUsedMemHigh

#elif TACHYON_USE_ROCM
#define gpuSuccess hipSuccess

// hipMemcpyKind
#define gpuMemcpyHostToHost hipMemcpyHostToHost
#define gpuMemcpyHostToDevice hipMemcpyHostToDevice
#define gpuMemcpyDeviceToHost hipMemcpyDeviceToHost
#define gpuMemcpyDeviceToDevice hipMemcpyDeviceToDevice
#define gpuMemcpyDefault hipMemcpyDefault

// hipMemAllocationHandleType
#define gpuMemAllocationTypeInvalid hipMemAllocationTypeInvalid
#define gpuMemAllocationTypePinned hipMemAllocationTypePinned
#define gpuMemAllocationTypeMax hipMemAllocationTypeMax

// hipMemHandleType
#define gpuMemHandleTypeNone hipMemHandleTypeNone
#define gpuMemHandleTypePosixFileDescriptor hipMemHandleTypePosixFileDescriptor
#define gpuMemHandleTypeWin32 hipMemHandleTypeWin32
#define gpuMemHandleTypeWin32Kmt hipMemHandleTypeWin32Kmt

// hipMemLocationType
#define gpuMemLocationTypeInvalid hipMemLocationTypeInvalid
#define gpuMemLocationTypeDevice hipMemLocationTypeDevice

// hipMemPoolAttr
#define gpuMemPoolReuseFollowEventDependencies hipMemPoolReuseFollowEventDependencies
#define gpuMemPoolReuseAllowOpportunistic hipMemPoolReuseAllowOpportunistic
#define gpuMemPoolReuseAllowInternalDependencies hipMemPoolReuseAllowInternalDependencies
#define gpuMemPoolAttrReleaseThreshold hipMemPoolAttrReleaseThreshold
#define gpuMemPoolAttrReservedMemCurrent hipMemPoolAttrReservedMemCurrent
#define gpuMemPoolAttrReservedMemHigh hipMemPoolAttrReservedMemHigh
#define gpuMemPoolAttrUsedMemCurrent hipMemPoolAttrUsedMemCurrent
#define gpuMemPoolAttrUsedMemHigh hipMemPoolAttrUsedMemHigh
#endif
// clang-format on

#endif  // TACHYON_DEVICE_GPU_GPU_ENUMS_H_
