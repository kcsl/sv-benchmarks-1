// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: dev_get_drvdata
// with type: void *dev_get_drvdata(const struct device *dev)
// with return type: (void)*
void *external_alloc(void);
void *dev_get_drvdata(const struct device *arg0) {
  // Pointer type
  return (void *)external_alloc();
}

// Function: dev_set_drvdata
// with type: int dev_set_drvdata(struct device *dev, void *data)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_drvdata(struct device *arg0, void *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: i2c_del_driver
// with type: void i2c_del_driver(struct i2c_driver *)
// with return type: void
void i2c_del_driver(struct i2c_driver *arg0) {
  // Void type
  return;
}

// Function: i2c_master_send
// with type: int i2c_master_send(const struct i2c_client *client, const char *buf, int count)
// with return type: int
int __VERIFIER_nondet_int(void);
int i2c_master_send(const struct i2c_client *arg0, const char *arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: i2c_register_driver
// with type: int i2c_register_driver(struct module *, struct i2c_driver *)
// with return type: int
int __VERIFIER_nondet_int(void);
int i2c_register_driver(struct module *arg0, struct i2c_driver *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: i2c_transfer
// with type: int i2c_transfer(struct i2c_adapter *adap, struct i2c_msg *msgs, int num)
// with return type: int
int __VERIFIER_nondet_int(void);
int i2c_transfer(struct i2c_adapter *arg0, struct i2c_msg *arg1, int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: kfree

// Function: ldv_check_return_value
// with type: void ldv_check_return_value(int res)
// with return type: void
void ldv_check_return_value(int arg0) {
  // Void type
  return;
}

// Function: ldv_initialize
// with type: void ldv_initialize()
// with return type: void
void ldv_initialize() {
  // Void type
  return;
}

// Skip function: malloc

// Function: mfd_add_devices
// with type: int mfd_add_devices(struct device *parent, int id, struct mfd_cell *cells, int n_devs, struct resource *mem_base, int irq_base)
// with return type: int
int __VERIFIER_nondet_int(void);
int mfd_add_devices(struct device *arg0, int arg1, struct mfd_cell *arg2, int arg3, struct resource *arg4, int arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mfd_remove_devices
// with type: void mfd_remove_devices(struct device *parent)
// with return type: void
void mfd_remove_devices(struct device *arg0) {
  // Void type
  return;
}

