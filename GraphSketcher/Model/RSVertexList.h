// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.

@class RSVertex;

// Protocol implemented by objects that have an ordered collection of vertices, such as connect-lines and fills
@protocol RSVertexList
- (RSVertex *)nextVertex:(RSVertex *)V;
- (RSVertex *)prevVertex:(RSVertex *)V;
@end
