#ifndef loxc_chunk_h
#define loxc_chunk_h

#include "common.h"
#include "memory.h"
#include "value.h"

typedef enum
{
  OP_CONSTANT,
  OP_NEGATE,
  OP_RETURN
} OpCode;

typedef struct
{
  int count;
  int capacity;
  uint8_t *code;
  ValueArray constants;
  int *lines;
} Chunk;

void initChunk(Chunk *chunk);

void writeChunk(Chunk *chunk, uint8_t byte, int line);

int addConstant(Chunk *chunk, Value value);

void freeChunk(Chunk *chunk);

#endif