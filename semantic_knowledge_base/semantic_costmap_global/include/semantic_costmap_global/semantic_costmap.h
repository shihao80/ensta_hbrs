#ifndef _SEMANTIC_COSTMAP_
#define _SEMANTIC_COSTMAP_

class SemanticCostmap {
public:
	SemanticCostmap();
	virtual ~SemanticCostmap();
	virtual bool buildSemanticCostmap() = 0;
};

#endif
