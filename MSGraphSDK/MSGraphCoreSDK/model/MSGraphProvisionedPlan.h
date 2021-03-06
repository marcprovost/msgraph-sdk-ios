// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.





#import "MSObject.h"

@interface MSGraphProvisionedPlan : MSObject

	@property (nonatomic, setter=setCapabilityStatus:, getter=capabilityStatus) NSString* capabilityStatus;
		@property (nonatomic, setter=setProvisioningStatus:, getter=provisioningStatus) NSString* provisioningStatus;
		@property (nonatomic, setter=setService:, getter=service) NSString* service;
	
@end
