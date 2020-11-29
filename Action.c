Action()
{
	// This is my first pull and comment
	web_custom_request("web_custom_request",
		"URL=www.example.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	return 0;
}
