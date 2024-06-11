#ifndef KLAW_H
#define KLAW_H

#include "MKL05Z4.h"
#define S2_MASK	(1<<10)		// Maska dla klawisza S2
#define S4_MASK	(1<<12)		// Maska dla klawisza S4
#define S2	10						// Numer bitu dla klawisza S2
#define S4	12						// Numer bitu dla klawisza S4

void Klaw_Init(void);
void Klaw_S2_4_Int(void);

#endif  /* KLAW_H */
