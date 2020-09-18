#include <stdio.h>
#include <modbus.h>

int main(void) {
  modbus_t *mb;
  uint16_t tab_reg[32];
  const uint8_t data[20]="Himani-Himanshi";

  mb = modbus_new_tcp("192.168.0.10", 10000);
  modbus_connect(mb);

  /* Read 5 registers from the address 0 */
//  modbus_read_registers(mb, 0, 5, tab_reg);

//  int modbus_write_register(modbus_t *ctx, int addr, int value);
//  modbus_write_register(mb, 0, int value);
//int modbus_read_registers(modbus_t *ctx, int addr, int nb, uint16_t *dest);

  modbus_write_registers(mb, 0, 5, (const uint16_t *)data);

  modbus_close(mb);
  modbus_free(mb);
}
