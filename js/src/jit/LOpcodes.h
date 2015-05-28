/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 * vim: set ts=8 sts=4 et sw=4 tw=99:
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef jit_LOpcodes_h
#define jit_LOpcodes_h

#define LIR_COMMON_OPCODE_LIST(_)   \
    _(Label)                        \
    _(Nop)                          \
    _(Mop)                          \
    _(OsiPoint)                     \
    _(MoveGroup)                    \
    _(Integer)                      \
    _(Pointer)                      \
    _(Double)                       \
    _(Float32)                      \
    _(SimdValueX4)                  \
    _(SimdSplatX4)                  \
    _(Int32x4)                      \
    _(Float32x4)                    \
    _(SimdExtractElementI)          \
    _(SimdExtractElementF)          \
    _(SimdSignMaskX4)               \
    _(SimdBinaryCompIx4)            \
    _(SimdBinaryCompFx4)            \
    _(SimdBinaryArithIx4)           \
    _(SimdBinaryArithFx4)           \
    _(SimdBinaryBitwiseX4)          \
    _(Value)                        \
    _(CloneLiteral)                 \
    _(Parameter)                    \
    _(Callee)                       \
    _(TableSwitch)                  \
    _(TableSwitchV)                 \
    _(Goto)                         \
    _(NewArray)                     \
    _(NewArrayCopyOnWrite)          \
    _(ArraySplice)                  \
    _(NewObject)                    \
    _(NewDeclEnvObject)             \
    _(NewCallObject)                \
    _(NewSingletonCallObject)       \
    _(NewStringObject)              \
    _(NewPar)                       \
    _(NewDenseArrayPar)             \
    _(NewCallObjectPar)             \
    _(NewDerivedTypedObject)        \
    _(InitElem)                     \
    _(InitElemGetterSetter)         \
    _(MutateProto)                  \
    _(InitProp)                     \
    _(InitPropGetterSetter)         \
    _(CheckOverRecursed)            \
    _(CheckOverRecursedPar)         \
    _(DefVar)                       \
    _(DefFun)                       \
    _(CallKnown)                    \
    _(CallGeneric)                  \
    _(CallNative)                   \
    _(ApplyArgsGeneric)             \
    _(Bail)                         \
    _(Unreachable)                  \
    _(GetDynamicName)               \
    _(FilterArgumentsOrEvalS)       \
    _(FilterArgumentsOrEvalV)       \
    _(CallDirectEvalS)              \
    _(CallDirectEvalV)              \
    _(StackArgT)                    \
    _(StackArgV)                    \
    _(CreateThis)                   \
    _(CreateThisWithProto)          \
    _(CreateThisWithTemplate)       \
    _(CreateArgumentsObject)        \
    _(GetArgumentsObjectArg)        \
    _(SetArgumentsObjectArg)        \
    _(ReturnFromCtor)               \
    _(ComputeThis)                  \
    _(LoadArrowThis)                \
    _(BitNotI)                      \
    _(BitNotV)                      \
    _(BitOpI)                       \
    _(BitOpV)                       \
    _(ShiftI)                       \
    _(UrshD)                        \
    _(Return)                       \
    _(Throw)                        \
    _(Phi)                          \
    _(TestIAndBranch)               \
    _(TestDAndBranch)               \
    _(TestFAndBranch)               \
    _(TestVAndBranch)               \
    _(TestOAndBranch)               \
    _(FunctionDispatch)             \
    _(TypeObjectDispatch)           \
    _(Compare)                      \
    _(CompareAndBranch)             \
    _(CompareD)                     \
    _(CompareDAndBranch)            \
    _(CompareF)                     \
    _(CompareFAndBranch)            \
    _(CompareS)                     \
    _(CompareStrictS)               \
    _(CompareB)                     \
    _(CompareBAndBranch)            \
    _(CompareV)                     \
    _(CompareVAndBranch)            \
    _(CompareVM)                    \
    _(BitAndAndBranch)              \
    _(IsNullOrLikeUndefined)        \
    _(IsNullOrLikeUndefinedAndBranch)\
    _(EmulatesUndefined)            \
    _(EmulatesUndefinedAndBranch)   \
    _(MinMaxI)                      \
    _(MinMaxD)                      \
    _(NegI)                         \
    _(NegD)                         \
    _(NegF)                         \
    _(AbsI)                         \
    _(AbsD)                         \
    _(AbsF)                         \
    _(ClzI)                         \
    _(SqrtD)                        \
    _(SqrtF)                        \
    _(Atan2D)                       \
    _(Hypot)                        \
    _(PowI)                         \
    _(PowD)                         \
    _(Random)                       \
    _(MathFunctionD)                \
    _(MathFunctionF)                \
    _(NotI)                         \
    _(NotD)                         \
    _(NotF)                         \
    _(NotO)                         \
    _(NotV)                         \
    _(AddI)                         \
    _(SubI)                         \
    _(MulI)                         \
    _(MathD)                        \
    _(MathF)                        \
    _(ModD)                         \
    _(BinaryV)                      \
    _(Concat)                       \
    _(ConcatPar)                    \
    _(CharCodeAt)                   \
    _(FromCharCode)                 \
    _(StringSplit)                  \
    _(Int32ToDouble)                \
    _(Float32ToDouble)              \
    _(DoubleToFloat32)              \
    _(Int32ToFloat32)               \
    _(ValueToDouble)                \
    _(ValueToInt32)                 \
    _(ValueToFloat32)               \
    _(DoubleToInt32)                \
    _(Float32ToInt32)               \
    _(TruncateDToInt32)             \
    _(TruncateFToInt32)             \
    _(BooleanToString)              \
    _(IntToString)                  \
    _(DoubleToString)               \
    _(ValueToString)                \
    _(Start)                        \
    _(OsrEntry)                     \
    _(OsrValue)                     \
    _(OsrScopeChain)                \
    _(OsrReturnValue)               \
    _(OsrArgumentsObject)           \
    _(RegExp)                       \
    _(RegExpExec)                   \
    _(RegExpTest)                   \
    _(RegExpReplace)                \
    _(StringReplace)                \
    _(Lambda)                       \
    _(LambdaArrow)                  \
    _(LambdaForSingleton)           \
    _(LambdaPar)                    \
    _(KeepAliveObject)              \
    _(Slots)                        \
    _(Elements)                     \
    _(ConvertElementsToDoubles)     \
    _(MaybeToDoubleElement)         \
    _(MaybeCopyElementsForWrite)    \
    _(LoadSlotV)                    \
    _(LoadSlotT)                    \
    _(StoreSlotV)                   \
    _(StoreSlotT)                   \
    _(GuardShape)                   \
    _(GuardShapePolymorphic)        \
    _(GuardObjectType)              \
    _(GuardObjectIdentity)          \
    _(GuardClass)                   \
    _(GuardThreadExclusive)         \
    _(TypeBarrierV)                 \
    _(TypeBarrierO)                 \
    _(MonitorTypes)                 \
    _(PostWriteBarrierO)            \
    _(PostWriteBarrierV)            \
    _(InitializedLength)            \
    _(SetInitializedLength)         \
    _(NeuterCheck)                  \
    _(BoundsCheck)                  \
    _(BoundsCheckRange)             \
    _(BoundsCheckLower)             \
    _(LoadElementV)                 \
    _(LoadElementT)                 \
    _(LoadElementHole)              \
    _(StoreElementV)                \
    _(StoreElementT)                \
    _(ArrayPopShiftV)               \
    _(ArrayPopShiftT)               \
    _(ArrayPushV)                   \
    _(ArrayPushT)                   \
    _(ArrayConcat)                  \
    _(ArrayJoin)                    \
    _(StoreElementHoleV)            \
    _(StoreElementHoleT)            \
    _(LoadTypedArrayElement)        \
    _(LoadTypedArrayElementHole)    \
    _(LoadTypedArrayElementStatic)  \
    _(StoreTypedArrayElement)       \
    _(StoreTypedArrayElementHole)   \
    _(StoreTypedArrayElementStatic) \
    _(EffectiveAddress)             \
    _(ClampIToUint8)                \
    _(ClampDToUint8)                \
    _(ClampVToUint8)                \
    _(LoadFixedSlotV)               \
    _(LoadFixedSlotT)               \
    _(StoreFixedSlotV)              \
    _(StoreFixedSlotT)              \
    _(FunctionEnvironment)          \
    _(ForkJoinContext)              \
    _(ForkJoinGetSlice)             \
    _(GetPropertyCacheV)            \
    _(GetPropertyCacheT)            \
    _(GetPropertyPolymorphicV)      \
    _(GetPropertyPolymorphicT)      \
    _(GetElementCacheV)             \
    _(GetElementCacheT)             \
    _(BindNameCache)                \
    _(CallGetProperty)              \
    _(GetNameCache)                 \
    _(CallGetIntrinsicValue)        \
    _(CallsiteCloneCache)           \
    _(CallGetElement)               \
    _(CallSetElement)               \
    _(CallInitElementArray)         \
    _(CallSetProperty)              \
    _(CallDeleteProperty)           \
    _(CallDeleteElement)            \
    _(SetPropertyCacheV)            \
    _(SetPropertyCacheT)            \
    _(SetElementCacheV)             \
    _(SetElementCacheT)             \
    _(SetPropertyPolymorphicV)      \
    _(SetPropertyPolymorphicT)      \
    _(CallIteratorStart)            \
    _(IteratorStart)                \
    _(IteratorNext)                 \
    _(IteratorMore)                 \
    _(IteratorEnd)                  \
    _(ArrayLength)                  \
    _(SetArrayLength)               \
    _(TypedArrayLength)             \
    _(TypedArrayElements)           \
    _(TypedObjectProto)             \
    _(TypedObjectElements)          \
    _(SetTypedObjectOffset)         \
    _(StringLength)                 \
    _(ArgumentsLength)              \
    _(GetFrameArgument)             \
    _(SetFrameArgumentT)            \
    _(SetFrameArgumentC)            \
    _(SetFrameArgumentV)            \
    _(RunOncePrologue)              \
    _(Rest)                         \
    _(RestPar)                      \
    _(TypeOfV)                      \
    _(ToIdV)                        \
    _(Floor)                        \
    _(FloorF)                       \
    _(Ceil)                         \
    _(CeilF)                        \
    _(Round)                        \
    _(RoundF)                       \
    _(In)                           \
    _(InArray)                      \
    _(InstanceOfO)                  \
    _(InstanceOfV)                  \
    _(CallInstanceOf)               \
    _(InterruptCheck)               \
    _(AsmJSInterruptCheck)          \
    _(InterruptCheckImplicit)       \
    _(ProfilerStackOp)              \
    _(GetDOMProperty)               \
    _(GetDOMMember)                 \
    _(SetDOMProperty)               \
    _(CallDOMNative)                \
    _(IsCallable)                   \
    _(IsObject)                     \
    _(HaveSameClass)                \
    _(HasClass)                     \
    _(AsmJSLoadHeap)                \
    _(AsmJSStoreHeap)               \
    _(AsmJSLoadGlobalVar)           \
    _(AsmJSStoreGlobalVar)          \
    _(AsmJSLoadFFIFunc)             \
    _(AsmJSParameter)               \
    _(AsmJSReturn)                  \
    _(AsmJSVoidReturn)              \
    _(AsmJSPassStackArg)            \
    _(AsmJSCall)                    \
    _(InterruptCheckPar)            \
    _(RecompileCheck)               \
    _(AssertRangeI)                 \
    _(AssertRangeD)                 \
    _(AssertRangeF)                 \
    _(AssertRangeV)

#if defined(JS_CODEGEN_X86)
# include "jit/x86/LOpcodes-x86.h"
#elif defined(JS_CODEGEN_X64)
# include "jit/x64/LOpcodes-x64.h"
#elif defined(JS_CODEGEN_ARM)
# include "jit/arm/LOpcodes-arm.h"
#elif defined(JS_CODEGEN_MIPS)
# include "jit/mips/LOpcodes-mips.h"
#elif defined(JS_CODEGEN_NONE)
# include "jit/none/LOpcodes-none.h"
#else
# error "Unknown architecture!"
#endif

#define LIR_OPCODE_LIST(_)          \
    LIR_COMMON_OPCODE_LIST(_)       \
    LIR_CPU_OPCODE_LIST(_)

#endif /* jit_LOpcodes_h */
