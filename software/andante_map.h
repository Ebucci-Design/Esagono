#ifndef __ANDANTE_MAP
#define __ANDANTE_MAP

#define STRIPS_NUM      12 //User defined

esg_node_t nodes_map[] = 
{ //port1       //port2      //port3      //port4      //port5      //port6
 {{{0,  START}, {1,  START}, {-1, START}, {-1, END  }, {-1, END  }, {11, END  }}}, //node 0
 {{{1,  END  }, {2,  START}, {3,  START}, {-1, END  }, {-1, END  }, {-1, END  }}}, //node 1
 {{{3,  END  }, {4,  START}, {5,  START}, {-1, END  }, {-1, END  }, {-1, END  }}}, //node 2
 {{{5,  END  }, {6,  START}, {7,  START}, {-1, START}, {-1, START}, {-1, END  }}}, //node 3
 {{{7,  END  }, {8,  START}, {9,  START}, {-1, END  }, {-1, START}, {-1, END  }}}, //node 4
 {{{9,  END  }, {10, START}, {11, START}, {-1, START}, {-1, START}, {-1, END  }}}, //node 5
 {{{0,  END  }, {10, END  }, {8,  END  }, {6,  END  }, {4,  END  }, {2,  END  }}}, //node 6
};

#endif
