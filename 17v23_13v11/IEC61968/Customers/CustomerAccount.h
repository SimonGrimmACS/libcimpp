///////////////////////////////////////////////////////////
//  CustomerAccount.h
//  Implementation of the Class CustomerAccount
///////////////////////////////////////////////////////////

#ifndef CUSTOMERACCOUNT_H
#define CUSTOMERACCOUNT_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoice.h"
#include "IEC61968/InfIEC61968/InfCustomers/WorkBillingInfo.h"
#include "IEC61968/PaymentMetering/Transaction.h"
#include "IEC61968/Customers/AccountNotification.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Customers
	{
		class CustomerAgreement;
	}
}

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Assignment of a group of products and services purchased by the customer
		 * through a customer agreement, used as a mechanism for customer billing and
		 * payment. It contains common information from the various types of customer
		 * agreements to create billings (invoices) for a customer and receive payment.
		 */
		class CustomerAccount : public IEC61968::Common::Document
		{

		public:
			CustomerAccount();
			virtual ~CustomerAccount();
			/**
			 * Cycle day on which the associated customer account will normally be billed,
			 * used to determine when to produce the billing.
			 */
			IEC61970::Base::Domain::String billingCycle;
			/**
			 * Budget bill code.
			 */
			IEC61970::Base::Domain::String budgetBill;
			/**
			 * The last amount that will be billed to the customer prior to shut off of the
			 * account.
			 */
			IEC61970::Base::Domain::Money lastBillAmount;
			std::list<IEC61968::InfIEC61968::InfERPSupport::ErpInvoice*> ErpInvoicees;
			std::list<IEC61968::InfIEC61968::InfCustomers::WorkBillingInfo*> WorkBillingInfos;
			/**
			 * All payment transactions for this customer account.
			 */
			std::list<IEC61968::PaymentMetering::Transaction*> PaymentTransactions;
			std::list<IEC61968::Customers::AccountNotification*> AccountNotification;
			/**
			 * All agreements for this customer account.
			 */
			std::list<IEC61968::Customers::CustomerAgreement*> CustomerAgreements;

		};

	}

}
#endif // CUSTOMERACCOUNT_H
