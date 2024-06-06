package;


import lime.system.CFFI;
import lime.system.JNI;


class ChromebookUtils {
	
	
	public static function isChromebook ():Bool {
		
		#if android
		
		return chromebook_utils_is_chromebook_jni();
		
		#else
		
		return chromebook_utils_is_chromebook();
		
		#end
		
	}
	
	
	#if android
	private static var chromebook_utils_is_chromebook_jni = JNI.createStaticMethod ("org/haxe/extension/ChromebookUtils", "isChromebook", "()Z");
	#else
	private static var chromebook_utils_is_chromebook = CFFI.load ("chromebook_utils", "chromebook_utils_is_chromebook", 0);
	#end
	
	
}