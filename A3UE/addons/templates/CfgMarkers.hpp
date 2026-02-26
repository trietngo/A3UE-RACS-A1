class CfgMarkers 
{
	class flag_NATO;

	class my_extension_marker_aaf_remnants: flag_NATO 
	{
		name = "AAF Remnants";
		icon = QPATHTOFOLDER(Pictures\Markers\marker_aaf_torn_co.paa);
		texture = QPATHTOFOLDER(Pictures\Markers\marker_aaf_torn_co.paa);
	};

	// RACS flag
	class racs_marker_flag : flag_NATO
	{
		name = "Royal Army Corps of Sahrani";
		icon = QPATHTOFOLDER(Templates\RACS_2007\flag_racs.paa);
		texture = QPATHTOFOLDER(Templates\RACS_2007\flag_racs.paa);
	}
};