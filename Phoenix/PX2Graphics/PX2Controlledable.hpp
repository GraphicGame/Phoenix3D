/*
*
* 文件名称	：	PX2Controlledable.hpp
*
*/

#ifndef PX2CONTROLLEDOBJECT_HPP
#define PX2CONTROLLEDOBJECT_HPP

#include "PX2GraphicsPre.hpp"
#include "PX2Controller.hpp"

namespace PX2
{
	
	/// 控制器基类
	/**
	* 从此类派生的类具有绑定控制器的功能。
	*/
	class Controlledable : public Object
	{
		PX2_DECLARE_RTTI;
		PX2_DECLARE_NAMES;
		PX2_DECLARE_PROPERTY;
		PX2_DECLARE_STREAM(Controlledable);

	protected:
		Controlledable ();
	public:
		virtual ~Controlledable ();

		// Controller
		void ResetPlay ();
		virtual void Play ();
		virtual bool IsPlaying () const;
		virtual void Stop ();
		virtual void Reset ();
		void SetSelfCtrled (bool selfCtrled);
		bool IsSelfCtrled () const;

		// 访问控制对象的控制器
		int GetNumControllers () const;
		Controller* GetController (int i) const;
		Controller *GetControllerByName (const std::string &name) const;
		bool HasController (Controller* controller);
		void AttachController (Controller* controller);
		void DetachController (Controller* controller);
		void DetachAllControllers ();
		void SortControls (); // 按照优先级从大到小排序
		bool UpdateControllers (double applicationTime);

	private:
		bool mIsSelfCtrled;
		std::vector<ControllerPtr> mControllers;
		double mControlUpdateTimeLast;
		double mControlUpdateTimeMin;
	};

	PX2_REGISTER_STREAM(Controlledable);
	typedef Pointer0<Controlledable> ControlledablePtr;
#include "PX2Controlledable.inl"

}

#endif