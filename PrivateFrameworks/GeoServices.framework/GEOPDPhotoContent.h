/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPhotoContent : PBCodable <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    unsigned int  _height;
    NSString * _url;
    unsigned int  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic, retain) NSString *url;
@property (nonatomic) unsigned int width;

- (unsigned long long)_area;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasUrl;
- (bool)hasWidth;
- (unsigned long long)hash;
- (unsigned int)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (id)url;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
