/**
 * A simple DVTiPhoneSimulatorRemoteClient framework for launching app on iOS Simulator
 *
 * Copyright (c) 2009-2013 by Appcelerator, Inc. All Rights Reserved.
 *
 * Copyright (c) 2012 The Chromium Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 * (link : http://src.chromium.org/chrome/trunk/src/testing/iossim/)
 *
 * Original Author: Landon Fuller <landonf@plausiblelabs.com>
 * Copyright (c) 2008-2011 Plausible Labs Cooperative, Inc.
 * All rights reserved.
 *
 *
 * Headers for the DVTiPhoneSimulatorRemoteClient framework used in this tool are
 * generated by class-dump, via GYP.
 * (class-dump is available at http://www.codethecode.com/projects/class-dump/)
 *
 * See the LICENSE file for the license on the source code in this file.
 */

#import <Foundation/Foundation.h>
#import <DVTiPhoneSimulatorRemoteClient/DVTiPhoneSimulatorRemoteClient.h>
#import "CoreSimulator.h"
#import "version.h"

@interface iPhoneSimulator : NSObject <DTiPhoneSimulatorSessionDelegate> {
@private
  DTiPhoneSimulatorSystemRoot *sdkRoot;
  NSFileHandle *stdoutFileHandle;
  NSFileHandle *stderrFileHandle;
  BOOL exitOnStartup;
  BOOL retinaDevice;
  BOOL tallDevice;
  BOOL sim_64bit;
  BOOL startOnly;
  BOOL verbose;
  BOOL alreadyPrintedData;
  BOOL launchFlag;
  BOOL isXcode6;
}

- (void)runWithArgc:(int)argc argv:(char **)argv;

- (void)createStdioFIFO:(NSFileHandle **)fileHandle ofType:(NSString *)type atPath:(NSString **)path;
- (void)removeStdioFIFO:(NSFileHandle *)fileHandle atPath:(NSString *)path;

@end
