#include <libMIME/src/mime.hpp>

#include <iostream>

using namespace std;
using namespace NS_LIBMIME;

int main(void)
{

	try{

	string_body sb1("stringbody1111");
	string_body sb11("stringbodyxx11");
	contenttype_body cb1;
		cb1.set("multipart", "mixed");

	mime_header mh1;

	mh1.set("stringname1111", &sb1);
	mh1.set(CONTENT_TYPE, &cb1);
	mh1.set("stringxx11", &sb11);

	body_shadow bs1("sdbody1111");


	string_body sb2("stringbody2222");
	contenttype_body cb2;
		cb2.set("multipart", "related");

	mime_header mh2;

	mh2.set("stringname2222", &sb2);
	mh2.set(CONTENT_TYPE, &cb2);

	body_shadow bs2("sdbody2222");

	string_body sb3("stringbody3333");
	contenttype_body cb3;
		cb3.set("multipart", "related");

	mime_header mh3;

	mh3.set("stringname3333", &sb3);
	mh3.set(CONTENT_TYPE, &cb3);

	body_shadow bs3("sdbody3333");

	string_body sb4("stringbody4444");
	contenttype_body cb4;
		cb4.set("multipart", "related");

	mime_header mh4;

	mh4.set("stringname4444", &sb4);
	mh4.set(CONTENT_TYPE, &cb4);

	body_shadow bs4("sdbody4444");

	string_body sb5("stringbody5555");
	contenttype_body cb5;
		cb5.set("multipart", "related");

	mime_header mh5;

	mh5.set("stringname5555", &sb5);
	mh5.set(CONTENT_TYPE, &cb5);

	body_shadow bs5("sdbody5555");

	string_body sb6("stringbody6666");
	contenttype_body cb6;
		cb6.set("multipart", "mixed");

	mime_header mh6;

	mh6.set("stringname6666", &sb6);
	mh6.set(CONTENT_TYPE, &cb6);

	body_shadow bs6("sdbody6666");

	string_body sb7("stringbody7777");
	contenttype_body cb7;
		cb7.set("multipart", "mixed");

	mime_header mh7;

	//mh7.set("stringname7777", &sb7);
	//mh7.set(CONTENT_TYPE, &cb7);

	body_shadow bs7("sdbody7777");


	string_body sb8("stringbody8888");
	contenttype_body cb8;
		cb8.set("multipart", "related");

	mime_header mh8;

	mh8.set("stringname8888", &sb8);
	mh8.set(CONTENT_TYPE, &cb8);

	body_shadow bs8("sdbody8888");

	class mime_entity me, *p; 

	me.set_part(mh1)->set_node(mh2,bs2);
	me.set_part(mh1)->set_node(mh3,bs3);
p = me.set_part(mh1);
		p->set_part(mh6)->set_node(mh7, bs7);
		p->set_part(mh6)->set_node(mh8, bs8);
	me.set_part(mh1)->set_node(mh5,bs5);

	cout << me.make() <<endl;

	}catch (const char *str)
	{
		cout << str << endl;
	}
	return 0;
}
