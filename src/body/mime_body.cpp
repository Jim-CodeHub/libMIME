/**-----------------------------------------------------------------------------------------------------------------
 * @file	mime_body.cpp
 * @brief	Multi-purpose mail extensions	
 * @ref		IETF-rfc2045, rfc2046, rfc2047, rfc2048, rfc2049 
 *
 * Copyright (c) 2019-2019 Jim Zhang 303683086@qq.com
 *------------------------------------------------------------------------------------------------------------------
*/

#include <libMIME/src/body/mime_body.hpp>

using namespace NS_LIBMIME;


/*
--------------------------------------------------------------------------------------------------------------------
*
*			                                  FUNCTIONS IMPLEMENT
*
--------------------------------------------------------------------------------------------------------------------
*/

/**
 *	@brief	    Set mime body's preamble 
 *	@param[in]  _preamble 
 *	@param[out] None 
 *	@return	    None 
 **/
void mime_body::set_preamble(const string &_preamble)
{
	this->preamble = _preamble;
	return;
}

/**
 *	@brief	    Set mime body's preamble 
 *	@param[in]  _preamble 
 *	@param[in]  _size - size of _preamble
 *	@param[out] None 
 *	@return	    None 
 **/
void mime_body::set_preamble(const char *_preamble, string::size_type _size)
{
	string _preamble_(_preamble, _size);

	this->set(_preamble_);       return;
}

/**
 *	@brief	    Set mime body's preamble 
 *	@param[in]  _preamble 
 *	@param[out] None 
 *	@return	    None 
 *	@note		String param '_preamble' MUST end with '\0'
 **/
void mime_body::set_preamble(const char *_preamble)
{
	string _preamble_(_preamble, strlen(_preamble));

	this->set(_preamble_);                  return;
}

/**
 *	@brief	    xxx 
 *	@param[in]  xxx 
 *	@param[out] xxx 
 *	@return	    xxx	
 **/
const class mime_body &mime_body::operator=(const class mime_body &_body)
{
#if 0
	this->preamble		 = _body.preamble	   ;
	*(this->bodys)		 = *(_body.bodys)	   ;
	*(this->part_entity) = *(_body.part_entity);
	string epilogue		 = _body.epilogue	   ;
#endif

	return _body;
}


/**
 *	@brief	    Set mime body's epilogue 
 *	@param[in]  _epilogue 
 *	@param[out] None 
 *	@return	    None 
 **/
void mime_body::set_epilogue(const string &_epilogue)
{
	this->epilogue = _epilogue;
	return;
}

/**
 *	@brief	    Set mime body's epilogue 
 *	@param[in]  _epilogue 
 *	@param[in]  _size - size of _epilogue
 *	@param[out] None 
 *	@return	    None 
 **/
void mime_body::set_epilogue(const char *_epilogue, string::size_type _size)
{
	string _epilogue_(_epilogue, _size);

	this->set(_epilogue_);       return;
}

/**
 *	@brief	    Set mime body's epilogue 
 *	@param[in]  _epilogue 
 *	@param[out] None 
 *	@return	    None 
 *	@note		String param '_epilogue' MUST end with '\0'
 **/
void mime_body::set_epilogue(const char *_epilogue)
{
	string _epilogue_(_epilogue, strlen(_epilogue));

	this->set(_epilogue_);                  return;
}


/**
 *	@brief	    Get mime body's preamble 
 *	@param[in]  None 
 *	@param[out] None 
 *	@return	    preamble of the mime body 
 **/
const string &mime_body::get_preamble(void) const noexcept
{
	return this->preamble;
}

/**
 *	@brief	    Get mime body's epilogue 
 *	@param[in]  None 
 *	@param[out] None 
 *	@return	    epilogue of the mime body 
 **/
const string &mime_body::get_epilogue(void) const noexcept
{
	return this->epilogue;
}
