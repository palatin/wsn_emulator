//
// Created by Игорь on 30.12.2017.
//

#ifndef WSN_NODE_H
#define WSN_NODE_H


#include "point.h"
#include "node_link.h"

namespace wsn {

    namespace model {

        enum {
            simple, cluster_head, sink
        };

        class Node {

        public:
            ~Node();

        private:
            Point *location;
            float energy;
            NodeLink *link;
        };

    }
}

#endif //WSN_NODE_H
