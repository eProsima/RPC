#ifndef _TypedefTest_ASYNC_SUPPORT_H_
#define _TypedefTest_ASYNC_SUPPORT_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/AsyncTask.h"


/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getLargo from the server in an asynchronous call.
 */
class TypedefTest_getLargoTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        TypedefTest_getLargoTask(TypedefTest_getLargoCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~TypedefTest_getLargoTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        TypedefTest_getLargoCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           TypedefTest_getLargoCallbackHandler &m_obj;
           
           TypedefTest_getLargoReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getLarguisimo from the server in an asynchronous call.
 */
class TypedefTest_getLarguisimoTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        TypedefTest_getLarguisimoTask(TypedefTest_getLarguisimoCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~TypedefTest_getLarguisimoTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        TypedefTest_getLarguisimoCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           TypedefTest_getLarguisimoCallbackHandler &m_obj;
           
           TypedefTest_getLarguisimoReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getDatosDef from the server in an asynchronous call.
 */
class TypedefTest_getDatosDefTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        TypedefTest_getDatosDefTask(TypedefTest_getDatosDefCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~TypedefTest_getDatosDefTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        TypedefTest_getDatosDefCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           TypedefTest_getDatosDefCallbackHandler &m_obj;
           
           TypedefTest_getDatosDefReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getDatosDefondo from the server in an asynchronous call.
 */
class TypedefTest_getDatosDefondoTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        TypedefTest_getDatosDefondoTask(TypedefTest_getDatosDefondoCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~TypedefTest_getDatosDefondoTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        TypedefTest_getDatosDefondoCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           TypedefTest_getDatosDefondoCallbackHandler &m_obj;
           
           TypedefTest_getDatosDefondoReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getCadena from the server in an asynchronous call.
 */
class TypedefTest_getCadenaTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        TypedefTest_getCadenaTask(TypedefTest_getCadenaCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~TypedefTest_getCadenaTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        TypedefTest_getCadenaCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           TypedefTest_getCadenaCallbackHandler &m_obj;
           
           TypedefTest_getCadenaReply m_reply;
};

/**
 * \brief This class represents a asynchronous task created to wait the reply of the procedure getCorrea from the server in an asynchronous call.
 */
class TypedefTest_getCorreaTask : public eProsima::DDSRPC::AsyncTask
{
    public:

        /**
         * \brief The default constructor.
         *
         * \param obj Object that implements the callbacks that DDSRPC will call when
         *            the reply will be received or and exception will be launched.
         * \param client Pointer to the server's proxy. Cannot be NULL.
         */
        TypedefTest_getCorreaTask(TypedefTest_getCorreaCallbackHandler &obj,
           eProsima::DDSRPC::Client *client);

        /// \brief The default destructor.
        virtual ~TypedefTest_getCorreaTask();
        
        virtual void execute();
        
        virtual void on_exception(const eProsima::DDSRPC::SystemException &ex);
        
        /**
         * \brief This function returns the object used by the task.
         *
         * \return The object that implements the callbacks.
         */
        TypedefTest_getCorreaCallbackHandler& getObject();
        
        void* getReplyInstance();
        
        private:
        
           TypedefTest_getCorreaCallbackHandler &m_obj;
           
           TypedefTest_getCorreaReply m_reply;
};

#endif // _TypedefTest_ASYNC_SUPPORT_H_