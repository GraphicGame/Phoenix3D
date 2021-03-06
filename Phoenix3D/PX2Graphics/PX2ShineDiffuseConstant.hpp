// PX2ShineDiffuseConstant.hpp

#ifndef PX2SHINEDIFFUSECONSTANT_HPP
#define PX2SHINEDIFFUSECONSTANT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2ShaderFloat.hpp"
#include "PX2Shine.hpp"

namespace PX2
{

	class ShineDiffuseConstant : public ShaderFloat
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(ShineDiffuseConstant);

	public:
		ShineDiffuseConstant (Shine* shine);
		virtual ~ShineDiffuseConstant ();

		Shine* GetShine ();

		virtual void Update (const Renderable* renderable, const Camera* camera);

		virtual void Float_OnRegistProperties (Object *parObj);
		virtual void Float_OnPropertyChanged (Object *parObj, const PropertyObject &obj);

	protected:
		ShinePtr mShine;
	};

	PX2_REGISTER_STREAM(ShineDiffuseConstant);
	typedef Pointer0<ShineDiffuseConstant> ShineDiffuseConstantPtr;

}

#endif
