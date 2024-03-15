#ifndef TPS_USING_MATRIX_H
#define TPS_USING_MATRIX_H
#include "../Traversal/BfsAndDfsUsingMatrix.h"
#include <stack>

class TpsUsingMatrix : public BfsAndDfsUsingMatrix {
private:
  void tpsHelper(GraphNode *node, std::stack<GraphNode *> &stack);
public:
  TpsUsingMatrix();
  void tps();
};
#endif // TPS_USING_MATRIX_H

