// PX2ObjectInspector.hpp

#ifndef PX2OBJECTINSPECTOR_HPP
#define PX2OBJECTINSPECTOR_HPP

#include "PX2EditorPre.hpp"
#include "PX2ObjectInspector.hpp"
#include "PX2ObjectPropertyGrid.hpp"

namespace PX2Editor
{

	class ObjectInspector : public wxWindow
	{
	public:
		ObjectInspector(wxWindow *parent);
		~ObjectInspector();

		void OnSize(wxSizeEvent& e);

		void SetObject(PX2::Object *obj);

	protected:
		DECLARE_EVENT_TABLE()

		ObjectInspector();

		bool mInitSized;
		PX2::ObjectPtr mObject;
		ObjectPropertyGrid *mObjectPropGrid;
	};

}

#endif