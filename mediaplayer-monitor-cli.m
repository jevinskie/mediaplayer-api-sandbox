// #import <Foundation/Foundation.h>
// #import <MediaPlayer/MediaPlayer.h>
// #import <ProtocolBuffer/ProtocolBuffer.h>
// #import <MediaRemote/MediaRemote.h>
@import Foundation;
@import MediaPlayer;
@import ProtocolBuffer;
@import MediaRemote;

#include <stdio.h>

int main(void) {
    NSLog(@"Hello, world.");
    MPNowPlayingInfoCenter *mpc = MPNowPlayingInfoCenter.defaultCenter;
    NSLog(@"mpc: %@", mpc);
    NSDictionary<NSString *, id> *npi = mpc.nowPlayingInfo;
    NSLog(@"npi: %@", npi);
    return 0;
}
