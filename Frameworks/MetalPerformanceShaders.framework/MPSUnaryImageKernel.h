/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSUnaryImageKernel : MPSKernel {
    int  _checkFlags;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  _clipRect;
    unsigned long long  _edgeMode;
    int (* _encode;
    void * _encodeData;
    int (* _getPreferredTileSize;
    struct { 
        long long x; 
        long long y; 
        long long z; 
    }  _offset;
}

@property (nonatomic) struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; } clipRect;
@property (nonatomic) unsigned long long edgeMode;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } offset;

- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })clipRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (unsigned long long)edgeMode;
- (bool)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id*)arg2 fallbackCopyAllocator:(id /* block */)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (struct { long long x1; long long x2; long long x3; })offset;
- (void)setClipRect:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setEdgeMode:(unsigned long long)arg1;
- (void)setOffset:(struct { long long x1; long long x2; long long x3; })arg1;
- (struct MPSRegion { struct MPSOrigin { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct MPSSize { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })sourceRegionForDestinationSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;

@end
