struct operator {
    int type;
    union {
      int intNum;
      float floatNum;
      double doubleNum;
    } types;
};
