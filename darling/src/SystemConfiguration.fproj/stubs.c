#include <SystemConfiguration/SystemConfiguration.h>
#include <SystemConfiguration/SCNetworkConfiguration.h>
#include <SystemConfiguration/SCNetworkConnection.h>

#ifdef DEBUG
#define STUB() printf("STUB %s\n", __func__)
#else
#define STUB() do {} while (0)
#endif

static const char* __ipv4_dummy = "ipv4";
const SCNetworkInterfaceRef kSCNetworkInterfaceIPv4 = (SCNetworkInterfaceRef)&__ipv4_dummy;
const CFStringRef kSCDynamicStoreUseSessionKeys = CFSTR("UseSessionKeys");

CFTypeID SCNetworkConnectionGetTypeID(void)
{
    STUB();
	return 0;
}

Boolean SCNetworkConnectionScheduleWithRunLoop(SCNetworkConnectionRef ref, CFRunLoopRef rl, CFStringRef rlMode)
{
    STUB();
	return 0;
}

Boolean SCNetworkConnectionUnscheduleFromRunLoop(SCNetworkConnectionRef ref, CFRunLoopRef rl, CFStringRef rlMode)
{
    STUB();
	return 0;
}

Boolean SCNetworkConnectionStop(SCNetworkConnectionRef ref, Boolean force)
{
    STUB();
	return 0;
}

Boolean SCNetworkConnectionStart(SCNetworkConnectionRef ref, CFDictionaryRef userOptions, Boolean linger)
{
    STUB();
	return 0;
}

Boolean
SCNetworkConnectionCopyUserPreferences		(
						CFDictionaryRef				  __nullable	selectionOptions,
						CFStringRef		__nonnull	* __nullable	serviceID,
						CFDictionaryRef		__nonnull	* __nullable	userOptions
						)			__OSX_AVAILABLE_STARTING(__MAC_10_3,__IPHONE_NA) {
    STUB();
	return 0;
}

SCNetworkConnectionRef SCNetworkConnectionCreateWithServiceID(CFAllocatorRef allocator, CFStringRef serviceID, SCNetworkConnectionCallBack cb, SCNetworkConnectionContext* ctxt)
{
    STUB();
	return NULL;
}

CFTypeID SCNetworkReachabilityGetTypeID(void)
{
    STUB();
	return 0;
}

Boolean SCNetworkReachabilityScheduleWithRunLoop(SCNetworkReachabilityRef ref, CFRunLoopRef rl, CFStringRef rlMode)
{
    STUB();
	return 0;
}

Boolean SCNetworkReachabilityUnscheduleFromRunLoop(SCNetworkReachabilityRef ref, CFRunLoopRef rl, CFStringRef rlMode)
{
    STUB();
	return 0;
}

Boolean SCNetworkReachabilitySetCallback(SCNetworkReachabilityRef target, SCNetworkReachabilityCallBack cb, SCNetworkReachabilityContext* ctxt)
{
    STUB();
	return 0;
}

Boolean SCNetworkReachabilityGetFlags(SCNetworkReachabilityRef target, SCNetworkReachabilityFlags* flags)
{
    STUB();
	return 0;
}

SCNetworkReachabilityRef SCNetworkReachabilityCreateWithName(CFAllocatorRef allocator, const char* nodeName)
{
    STUB();
	return NULL;
}

SCNetworkReachabilityRef SCNetworkReachabilityCreateWithAddressPair(CFAllocatorRef allocator, const struct sockaddr* localAddress, const struct sockaddr* remoteAddress)
{
    STUB();
	return NULL;
}

SCNetworkReachabilityRef SCNetworkReachabilityCreateWithAddress(CFAllocatorRef allocator, const struct sockaddr* remoteAddress)
{
    STUB();
	return NULL;
}

CFStringRef SCDynamicStoreKeyCreateNetworkGlobalEntity(CFAllocatorRef allocator, CFStringRef domain, CFStringRef entity)
{
	STUB();
	return NULL;
}

CFPropertyListRef SCDynamicStoreCopyValue(SCDynamicStoreRef store, CFStringRef key)
{
	STUB();
	return NULL;
}

SCDynamicStoreRef SCDynamicStoreCreate(CFAllocatorRef allocator, CFStringRef name, SCDynamicStoreCallBack callout, SCDynamicStoreContext *context)
{
	STUB();
	return NULL;
}

SCDynamicStoreRef __nullable SCDynamicStoreCreateWithOptions(CFAllocatorRef __nullable allocator, CFStringRef name, CFDictionaryRef __nullable storeOptions, SCDynamicStoreCallBack __nullable callout, SCDynamicStoreContext* __nullable context)
{
    STUB();
	return NULL;
};

CFStringRef SCDynamicStoreKeyCreate(CFAllocatorRef allocator, CFStringRef fmt, ...)
{
	STUB();
	return NULL;
}

Boolean SCDynamicStoreSetDispatchQueue(SCDynamicStoreRef store, dispatch_queue_t queue)
{
	STUB();
	return FALSE;
}

Boolean SCDynamicStoreSetNotificationKeys(SCDynamicStoreRef store, CFArrayRef __nullable keys, CFArrayRef __nullable patterns) {
	STUB();
	return FALSE;
}

CFStringRef SCDynamicStoreKeyCreateComputerName(CFAllocatorRef allocator) {
	STUB();
	return NULL;
};

Boolean SCPreferencesSetComputerName(SCPreferencesRef	prefs, CFStringRef __nullable	name, CFStringEncoding	nameEncoding) {
	STUB();
	return FALSE;
};

Boolean SCPreferencesSetLocalHostName(SCPreferencesRef	prefs, CFStringRef __nullable	name) {
	STUB();
	return FALSE;
};

CFStringRef SCDynamicStoreKeyCreateHostNames(CFAllocatorRef allocator) {
	STUB();
	return NULL;
};

CFStringRef SCDynamicStoreKeyCreateNetworkInterfaceEntity(CFAllocatorRef allocator, CFStringRef domain, CFStringRef ifname, CFStringRef entity) {
	STUB();
	return NULL;
};

SCNetworkInterfaceRef _SCNetworkInterfaceCreateWithBSDName(CFAllocatorRef allocator, CFStringRef bsdName)
{
	STUB();
	return (SCNetworkInterfaceRef)CFRetain(bsdName);
}

CFStringRef SCNetworkInterfaceGetBSDName(SCNetworkInterfaceRef interface)
{
	STUB();
	if (!interface) return NULL;
	if (CFGetTypeID((CFTypeRef)interface) == CFStringGetTypeID()) {
		return (CFStringRef)interface;
	}
	return CFSTR("en0");
}

CFStringRef SCNetworkInterfaceGetLocalizedDisplayName(SCNetworkInterfaceRef interface)
{
	STUB();
	return CFSTR("Ethernet");
}

SCNetworkInterfaceRef SCNetworkInterfaceGetInterface(SCNetworkInterfaceRef interface)
{
	STUB();
	return interface;
}

SCNetworkInterfaceRef SCNetworkServiceGetInterface(SCNetworkServiceRef service)
{
	STUB();
	return (SCNetworkInterfaceRef)CFSTR("en0");
}

CFArrayRef SCNetworkInterfaceCopyAll(void)
{
	STUB();
	CFStringRef en0 = CFSTR("en0");
	return CFArrayCreate(kCFAllocatorDefault, (const void**)&en0, 1, &kCFTypeArrayCallBacks);
}

CFStringRef SCDynamicStoreKeyCreateNetworkInterface(CFAllocatorRef allocator, CFStringRef domain)
{
	STUB();
	return CFStringCreateWithFormat(allocator, NULL, CFSTR("%@/%@"), domain, CFSTR("Network/Interface"));
}

CFStringRef SCDynamicStoreKeyCreateNetworkServiceEntity(CFAllocatorRef allocator, CFStringRef domain, CFStringRef serviceID, CFStringRef entity)
{
	STUB();
	return CFStringCreateWithFormat(allocator, NULL, CFSTR("%@/Network/Service/%@/%@"), domain, serviceID, entity);
}

SCNetworkConnectionRef SCNetworkConnectionCreateWithService(CFAllocatorRef allocator, CFStringRef serviceID, SCNetworkConnectionCallBack callout, SCNetworkConnectionContext* context)
{
	STUB();
	return NULL;
}

CFArrayRef SCNetworkConnectionCopyAvailableServices(void)
{
	STUB();
	return CFArrayCreate(kCFAllocatorDefault, NULL, 0, &kCFTypeArrayCallBacks);
}

CFDictionaryRef SCNetworkConnectionCopyExtendedStatus(SCNetworkConnectionRef connection)
{
	STUB();
	return CFDictionaryCreate(kCFAllocatorDefault, NULL, NULL, 0, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);
}

CFDictionaryRef SCNetworkConnectionCopyStatistics(SCNetworkConnectionRef connection)
{
	STUB();
	return CFDictionaryCreate(kCFAllocatorDefault, NULL, NULL, 0, &kCFTypeDictionaryKeyCallBacks, &kCFTypeDictionaryValueCallBacks);
}

SCNetworkServiceRef SCNetworkConnectionGetService(SCNetworkConnectionRef connection)
{
	STUB();
	return NULL;
}

SCNetworkConnectionStatus SCNetworkConnectionGetStatus(SCNetworkConnectionRef connection)
{
	STUB();
	return 0; // kSCNetworkConnectionInvalid
}

/* ---- Darling: local discovery placeholders, NOT implementations ----
 * Each logs its own name when called and returns zero, so one run shows which of these an
 * application actually reaches. Replace each with a real implementation, or remove it. */
#include <stdio.h>
#ifndef DARLING_UNIMPLEMENTED
#define DARLING_UNIMPLEMENTED(sym) \
	__attribute__((visibility("default"))) long darling_unimplemented_##sym(void) __asm__("_" #sym); \
	long darling_unimplemented_##sym(void) { fprintf(stderr, "DARLING unimplemented function called: " #sym "\n"); return 0; }
#endif
DARLING_UNIMPLEMENTED(SCDynamicStoreKeyCreateProxies)

// <copied from="SystemConfiguration.fproj/SCD.c"> (that file is not built for Darling)
#include <string.h>
#include <sys/errno.h>
#include <mach/mach_error.h>
#include <servers/bootstrap.h>

static const struct sc_errmsg {
	int	status;
	char	*message;
} sc_errmsgs[] = {
	{ kSCStatusAccessError,		"Permission denied" },
	{ kSCStatusConnectionIgnore,	"Network connection information not available at this time" },
	{ kSCStatusConnectionNoService,	"Network service for connection not available" },
	{ kSCStatusFailed,		"Failed!" },
	{ kSCStatusInvalidArgument,	"Invalid argument" },
	{ kSCStatusKeyExists,		"Key already defined" },
	{ kSCStatusLocked,		"Lock already held" },
	{ kSCStatusMaxLink,		"Maximum link count exceeded" },
	{ kSCStatusNeedLock,		"Lock required for this operation" },
	{ kSCStatusNoStoreServer,	"Configuration daemon not (no longer) available" },
	{ kSCStatusNoStoreSession,	"Configuration daemon session not active" },
	{ kSCStatusNoConfigFile,	"Configuration file not found" },
	{ kSCStatusNoKey,		"No such key" },
	{ kSCStatusNoLink,		"No such link" },
	{ kSCStatusNoPrefsSession,	"Preference session not active" },
	{ kSCStatusNotifierActive,	"Notifier is currently active" },
	{ kSCStatusOK,			"Success!" },
	{ kSCStatusPrefsBusy,		"Preferences update currently in progress" },
	{ kSCStatusReachabilityUnknown,	"Network reachability cannot be determined" },
	{ kSCStatusStale,		"Write attempted on stale version of object" },
};
#define nSC_ERRMSGS (sizeof(sc_errmsgs)/sizeof(struct sc_errmsg))

const char *
SCErrorString(int status)
{
	int i;

	for (i = 0; i < (int)nSC_ERRMSGS; i++) {
		if (sc_errmsgs[i].status == status) {
			return sc_errmsgs[i].message;
		}
	}

	if ((status > 0) && (status <= ELAST)) {
		return strerror(status);
	}

	if ((status >= BOOTSTRAP_SUCCESS) && (status <= BOOTSTRAP_NO_MEMORY)) {
		return bootstrap_strerror(status);
	}

	return mach_error_string(status);
}
// </copied>
