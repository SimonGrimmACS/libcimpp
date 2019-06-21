///////////////////////////////////////////////////////////
//  TagAction.h
//  Implementation of the Class TagAction
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef TAGACTION_H
#define TAGACTION_H

#include "IEC61968/Operations/TagActionKind.h"
#include "IEC61968/Operations/SwitchingAction.h"
#include "IEC61968/Operations/OperationalTag.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Action on operation tag as a switching step.
		 */
		class TagAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			TagAction();
			virtual ~TagAction();
			/**
			 * Kind of tag action.
			 */
			IEC61968::Operations::TagActionKind kind = IEC61968::Operations::TagActionKind::_undef;
			/**
			 * Tag associated with this tag action.
			 */
			IEC61968::Operations::OperationalTag *OperationalTag;

		};

	}

}
#endif // TAGACTION_H
