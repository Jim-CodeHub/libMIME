/**-----------------------------------------------------------------------------------------------------------------
 * @file	mime_message.hpp
 * @brief	Multi-purpose mail extensions	
 * @ref		IETF-rfc2045, rfc2046, rfc2047, rfc2048, rfc2049 
 *
 * Copyright (c) 2019-2019 Jim Zhang 303683086@qq.com
 *------------------------------------------------------------------------------------------------------------------
*/


#ifndef __LIBMIME_MIME_MESSAGE_HPP__
#define __LIBMIME_MIME_MESSAGE_HPP__


/*------------------------------------------------------------------------------------------------------------------
 *
 *												MIME_MESSAGE INCLUDES
 *
 *------------------------------------------------------------------------------------------------------------------
*/

#include <libMIME/src/body/mime_body.hpp>
#include <libMIME/src/header/mime_header.hpp>

namespace NS_LIBMIME{

using namespace std ;


/*------------------------------------------------------------------------------------------------------------------
 *
 *												MIME_MESSAGE SHORT ALIAS 
 *
 *------------------------------------------------------------------------------------------------------------------
*/


/*------------------------------------------------------------------------------------------------------------------
 *
 *												MIME_MESSAGE DATA BLOCK
 *
 *------------------------------------------------------------------------------------------------------------------
*/

/**
 *	@brief mime_message class and function set
 *	@note 
 *		Inheritance graph : None 
 **/
class mime_message{
	public:
		mime_message(){}; /**< Empty structure */

	protected:
		class mime_header header;
		class mime_body   body  ;
};


} /* namespace NS_LIBMIME */


#endif /*__LIBMIME_MIME_MESSAGE_HPP__*/

