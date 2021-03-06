// PX2VWMatrixConstant.hpp

#ifndef PX2VWMATRIXCONSTANT_HPP
#define PX2VWMATRIXCONSTANT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2ShaderFloat.hpp"

namespace PX2
{

	class VWMatrixConstant : public ShaderFloat
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_STREAM(VWMatrixConstant);

	public:
		VWMatrixConstant ();
		virtual ~VWMatrixConstant ();

		virtual void Update (const Renderable* renderable, const Camera* camera);
	};

	PX2_REGISTER_STREAM(VWMatrixConstant);
	typedef Pointer0<VWMatrixConstant> VWMatrixConstantPtr;

}

#endif
