/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FUChartDataGroup : NSObject <FUChartDataSetDataSource> {
    NSArray * _dataSets;
    <FUChartDataGroupDataSource> * _dataSource;
}

@property (nonatomic, retain) NSArray *dataSets;
@property (nonatomic) <FUChartDataGroupDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned int)arg1;
- (id)_getLabelsForSetAtIndex:(unsigned int)arg1;
- (unsigned int)_getNumberOfDataPointsInSetAtIndex:(unsigned int)arg1;
- (unsigned int)_getNumberOfDataSets;
- (id)_getPointForSetAtIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (id)_getPointsForSetAtIndex:(unsigned int)arg1;
- (void)_reloadDataSet:(id)arg1;
- (void)addDataPointWithXValue:(float)arg1 yValue:(float)arg2 setIndex:(unsigned int)arg3;
- (id)dataPointsForSet:(id)arg1;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned int)arg2;
- (id)dataSetAtIndex:(unsigned int)arg1;
- (id)dataSets;
- (id)dataSource;
- (id)description;
- (id)labelsForSet:(id)arg1;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (unsigned int)numberOfDataPointsForDataSet:(id)arg1;
- (unsigned int)numberOfDataSets;
- (void)reloadData;
- (void)reloadDataInSetAtIndex:(unsigned int)arg1;
- (void)reloadDataPointInSetAtIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (void)removeDataPointFromSetAtIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (void)setDataSets:(id)arg1;
- (void)setDataSource:(id)arg1;

@end