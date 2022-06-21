#ifndef E217C601_F080_41FD_8FB6_BFB396974557
#define E217C601_F080_41FD_8FB6_BFB396974557

typedef struct ExportData
{
  unsigned long int *texture;
  unsigned int width, height;
  unsigned int bytes_per_pixel;
  unsigned long int vram_addr;
} ExportData;

#ifdef __cplusplus
extern "C" {
void export_pgraph_data(ExportData *imagedata);
}
#endif

#endif /* E217C601_F080_41FD_8FB6_BFB396974557 */
