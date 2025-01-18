#ifndef __LETRAS_H_
#define __LETRAS_H_

#define MATRIX_LEN 5

#define OFF (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 0, 0, 0, 0},\
  {0, 0, 0, 0, 0},\
  {0, 0, 0, 0, 0},\
  {0, 0, 0, 0, 0},\
  {0, 0, 0, 0, 0}\
}

#define CHAR_0 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 1, 1, 1, 0},\
  {1, 0, 0, 1, 1},\
  {1, 0, 1, 0, 1},\
  {1, 1, 0, 0, 1},\
  {0, 1, 1, 1, 0}\
}

#define CHAR_1 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 1, 1, 0, 0},\
  {0, 0, 1, 0, 0},\
  {0, 0, 1, 0, 0},\
  {0, 0, 1, 0, 0},\
  {0, 1, 1, 1, 0}\
}

#define CHAR_2 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1, 1, 1, 1, 0},\
  {0, 0, 0, 0, 1},\
  {0, 1, 1, 1, 0},\
  {1, 0, 0, 0, 0},\
  {1, 1, 1, 1, 1}\
}
#define CHAR_3 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1, 1, 1, 1, 0},\
  {0, 0, 0, 0, 1},\
  {0, 0, 1, 1, 0},\
  {0, 0, 0, 0, 1},\
  {1, 1, 1, 1, 0}\
}
#define CHAR_4 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 0, 1, 1, 0},\
  {0, 1, 0, 1, 0},\
  {1, 0, 0, 1, 0},\
  {1, 1, 1, 1, 1},\
  {0, 0, 0, 1, 0}\
}

#define CHAR_5 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1, 1, 1, 1, 1},\
  {1, 0, 0, 0, 0},\
  {1, 1, 1, 1, 0},\
  {0, 0, 0, 0, 1},\
  {1, 1, 1, 1, 0}\
}

#define CHAR_6 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 1, 1, 1, 1},\
  {1, 0, 0, 0, 0},\
  {1, 1, 1, 1, 0},\
  {1, 0, 0, 0, 1},\
  {0, 1, 1, 1, 0}\
}

#define CHAR_7 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1, 1, 1, 1, 1},\
  {0, 0, 0, 0, 1},\
  {0, 0, 0, 1, 0},\
  {0, 0, 1, 0, 0},\
  {0, 1, 0, 0, 0}\
}

#define CHAR_8 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 1, 1, 1, 0},\
  {1, 0, 0, 0, 1},\
  {0, 1, 1, 1, 0},\
  {1, 0, 0, 0, 1},\
  {0, 1, 1, 1, 0}\
}

#define CHAR_9 (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0, 1, 1, 1, 0},\
  {1, 0, 0, 0, 1},\
  {0, 1, 1, 1, 1},\
  {0, 0, 0, 0, 1},\
  {1, 1, 1, 1, 0}\
}

#define CHAR_A (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0 ,0 ,1 ,0 ,0},\
  {0 ,1 ,0 ,1 ,0},\
  {0, 1, 1, 1, 0},\
  {0, 1, 0, 1, 0},\
  {0, 1, 0, 1, 0}\
}

#define CHAR_B (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1 ,1 ,1 ,1 ,0},\
  {1 ,0 ,0 ,0 ,1},\
  {1, 1, 1, 1, 0},\
  {1, 0, 0, 0, 1},\
  {1, 1, 1, 1, 0}\
}

#define CHAR_C (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0 ,1 ,1 ,1 ,1},\
  {1 ,0 ,0 ,0 ,0},\
  {1, 0, 0, 0, 0},\
  {1, 0, 0, 0, 0},\
  {0, 1, 1, 1, 1}\
}

#define CHAR_D (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1 ,1 ,1 ,1 ,0},\
  {1 ,0 ,0 ,0 ,1},\
  {1, 0, 0, 0, 1},\
  {1, 0, 0, 0, 1},\
  {1, 1, 1, 1, 0}\
}

#define CHAR_AST (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {1 ,0 ,1 ,0 ,1},\
  {0 ,0 ,1 ,1 ,0},\
  {1, 1, 1, 1, 1},\
  {0, 1, 1, 0, 0},\
  {1, 0, 1, 0, 1}\
}

#define CHAR_JG_VELHA (bool [MATRIX_LEN][MATRIX_LEN]) {\
  {0 ,1 ,0 ,1 ,0},\
  {1 ,1 ,1 ,1 ,1},\
  {0, 1, 0, 1, 0},\
  {1, 1, 1, 1, 1},\
  {0, 1, 0, 1, 0}\
}



#endif