#ifndef _SCE_FIBER_H_
#define _SCE_FIBER_H_

#include "orbis/_types/fiber.h"
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Empty Comment
int32_t _sceFiberInitializeImpl(OrbisFiber *fiber, const char *name,
                                OrbisFiberEntry entry, uint64_t argOnInitialize,
                                void *addrContext, uint64_t sizeContext,
                                const OrbisFiberOptParam *option);

// Empty Comment
int32_t sceFiberOptParamInitialize(OrbisFiberOptParam *opts);

// Empty Comment
int32_t sceFiberRename(OrbisFiber *fiber, const char *name);

// Empty Comment
int32_t sceFiberReturnToThread(uint64_t argOnReturn, uint64_t *argOnRun);

// Empty Comment
int32_t sceFiberGetInfo(OrbisFiber *fiber, OrbisFiberInfo *fiberInfo);

// Empty Comment
int32_t sceFiberFinalize(OrbisFiber *fiber);

// Empty Comment
int32_t sceFiberRun(OrbisFiber *fiber, uint64_t argOnRunTo,
                    uint64_t *argOnReturn);

// Empty Comment
int32_t sceFiberSwitch(OrbisFiber *fiber, uint64_t argOnRunTo,
                       uint64_t *argOnRun);

// Empty Comment
int32_t sceFiberGetSelf(OrbisFiber **fiber);

// Empty Comment
int32_t sceFiberStartContextSizeCheck(uint32_t flags);

// Empty Comment
int32_t sceFiberStopContextSizeCheck();

// Empty Comment
void _sceFiberAttachContextAndRun();
// Empty Comment
void _sceFiberAttachContextAndSwitch();
// Empty Comment
void _sceFiberGetThreadFramePointerAddress();
// Empty Comment
void _sceFiberInitializeWithInternalOptionImpl();

#ifdef __cplusplus
}
#endif

#endif
