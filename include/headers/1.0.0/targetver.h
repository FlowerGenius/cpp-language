/*SHEILa========================================================================
 * Name        : targetver.h
 * Author      : FlowerGenius<justanortherngirl58@gmail.com>
 * Version     : 1.0.0
 * Copyright   : This software is not protected
 * Description : The workspace project for the AI SHEILa
 * Module      : CppLanguage/CppLanguage
 * Created     : Apr 14, 2018
 * Modified    : 05 18, 18
 *==============================================================================
 */
#ifndef CppLanguage__INCLUDE_TARGETVER_H_
#define CppLanguage__INCLUDE_TARGETVER_H_

#ifdef _WIN32 || _WIN64
	#pragma once

	#define _WIN32_WINNT_WINLATEST 0x0000
	#define NTDDI_WINLATEST    0x00000000

	// Including SDKDDKVer.h defines the highest available Windows platform.

	// If you wish to build your application for a previous Windows platform, 
	// include WinSDKVer.h and set the _WIN32_WINNT macro to the platform you 
	// wish to support before including SDKDDKVer.h.

	#ifndef _WIN32_WINNT_ 
		
		#undef _WIN32_WINNT_WINLATEST
	
		#include <WinSDKVer.h>
	
		#ifdef _WIN32_WINNT
			#if _WIN32_WINNT < _WIN32_WINNT_
				#define _WIN32_WINNT  _WIN32_WINNT_
			#endif
		#else
			#define _WIN32_WINNT  _WIN32_WINNT_
		#endif

		#ifdef WINVER
			#if WINVER < _WIN32_WINNT_
				#define WINVER  _WIN32_WINNT_
			#endif
		#else
			#define WINVER  _WIN32_WINNT_
		#endif
	#else
	
		#undef _WIN32_WINNT_WINLATEST
	
	#endif /* _WIN32_WINNT_  */

	#ifndef NTDDI_
		
		#undef NTDDI_WINLATEST

		#include <WinSDKVer.h>

		#ifdef NTDDI_VERSION
			#if NTDDI_VERSION < NTDDI_
				#define NTDDI_VERSION NTDDI_
			#endif
		#else
			#define NTDDI_VERSION  NTDDI_
		#endif

	#else 

		#undef NTDDI_WINLATEST

	#endif /* NTDDI_ */
			
	#include <SDKDDKVer.h>
#endif


#endif /* CppLanguage__INCLUDE_TARGETVER_H_ */
