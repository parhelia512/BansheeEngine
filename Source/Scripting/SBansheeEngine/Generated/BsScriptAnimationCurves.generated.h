#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"
#include "../../../bsf/Source/Foundation/bsfCore/Animation/BsAnimationCurve.h"

namespace bs
{
	struct AnimationCurves;
	struct __TNamedAnimationCurveQuaternionInterop;
	class AnimationCurvesEx;
	struct __TNamedAnimationCurveVector3Interop;
	struct __TNamedAnimationCurvefloatInterop;

	class BS_SCR_BE_EXPORT ScriptAnimationCurves : public ScriptObject<ScriptAnimationCurves>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, "BansheeEngine", "AnimationCurves")

		ScriptAnimationCurves(MonoObject* managedInstance, const SPtr<AnimationCurves>& value);

		SPtr<AnimationCurves> getInternal() const { return mInternal; }
		static MonoObject* create(const SPtr<AnimationCurves>& value);

	private:
		SPtr<AnimationCurves> mInternal;

		static void Internal_AnimationCurves(MonoObject* managedInstance);
		static void Internal_addPositionCurve(ScriptAnimationCurves* thisPtr, MonoString* name, MonoObject* curve);
		static void Internal_addRotationCurve(ScriptAnimationCurves* thisPtr, MonoString* name, MonoObject* curve);
		static void Internal_addScaleCurve(ScriptAnimationCurves* thisPtr, MonoString* name, MonoObject* curve);
		static void Internal_addGenericCurve(ScriptAnimationCurves* thisPtr, MonoString* name, MonoObject* curve);
		static void Internal_removePositionCurve(ScriptAnimationCurves* thisPtr, MonoString* name);
		static void Internal_removeRotationCurve(ScriptAnimationCurves* thisPtr, MonoString* name);
		static void Internal_removeScaleCurve(ScriptAnimationCurves* thisPtr, MonoString* name);
		static void Internal_removeGenericCurve(ScriptAnimationCurves* thisPtr, MonoString* name);
		static MonoArray* Internal_getPositionCurves(ScriptAnimationCurves* thisPtr);
		static void Internal_setPositionCurves(ScriptAnimationCurves* thisPtr, MonoArray* value);
		static MonoArray* Internal_getRotationCurves(ScriptAnimationCurves* thisPtr);
		static void Internal_setRotationCurves(ScriptAnimationCurves* thisPtr, MonoArray* value);
		static MonoArray* Internal_getScaleCurves(ScriptAnimationCurves* thisPtr);
		static void Internal_setScaleCurves(ScriptAnimationCurves* thisPtr, MonoArray* value);
		static MonoArray* Internal_getGenericCurves(ScriptAnimationCurves* thisPtr);
		static void Internal_setGenericCurves(ScriptAnimationCurves* thisPtr, MonoArray* value);
	};
}
