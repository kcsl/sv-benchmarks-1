// Skip function: __VERIFIER_error

// Skip function: __VERIFIER_nondet_int

// Function: __alloc_pages_nodemask
// with type: struct page *__alloc_pages_nodemask(gfp_t , unsigned int, struct zonelist *, nodemask_t *)
// with return type: (struct page)*
void *external_alloc(void);
struct page *__alloc_pages_nodemask(gfp_t arg0, unsigned int arg1, struct zonelist *arg2, nodemask_t *arg3) {
  // Pointer type
  return (struct page *)external_alloc();
}

// Function: __const_udelay
// with type: void __const_udelay(unsigned long)
// with return type: void
void __const_udelay(unsigned long arg0) {
  // Void type
  return;
}

// Function: __cpu_to_node
// with type: int __cpu_to_node(int)
// with return type: int
int __VERIFIER_nondet_int(void);
int __cpu_to_node(int arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __dynamic_dev_dbg
// with type: int __dynamic_dev_dbg(struct _ddebug *, const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int __dynamic_dev_dbg(struct _ddebug *arg0, const struct device *arg1, const char *arg2, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: __init_waitqueue_head
// with type: void __init_waitqueue_head(wait_queue_head_t *, const char *, struct lock_class_key *)
// with return type: void
void __init_waitqueue_head(wait_queue_head_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __mutex_init
// with type: void __mutex_init(struct mutex *, const char *, struct lock_class_key *)
// with return type: void
void __mutex_init(struct mutex *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __phys_addr
// with type: unsigned long int __phys_addr(unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int __phys_addr(unsigned long arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: __raw_spin_lock_init
// with type: void __raw_spin_lock_init(raw_spinlock_t *, const char *, struct lock_class_key *)
// with return type: void
void __raw_spin_lock_init(raw_spinlock_t *arg0, const char *arg1, struct lock_class_key *arg2) {
  // Void type
  return;
}

// Function: __wake_up
// with type: void __wake_up(wait_queue_head_t *, unsigned int, int, void *)
// with return type: void
void __wake_up(wait_queue_head_t *arg0, unsigned int arg1, int arg2, void *arg3) {
  // Void type
  return;
}

// Function: _dev_info
// with type: int _dev_info(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int _dev_info(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: _raw_spin_lock
// with type: void _raw_spin_lock(raw_spinlock_t *)
// with return type: void
void _raw_spin_lock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_lock_irqsave
// with type: unsigned long int _raw_spin_lock_irqsave(raw_spinlock_t *)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int _raw_spin_lock_irqsave(raw_spinlock_t *arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: _raw_spin_unlock
// with type: void _raw_spin_unlock(raw_spinlock_t *)
// with return type: void
void _raw_spin_unlock(raw_spinlock_t *arg0) {
  // Void type
  return;
}

// Function: _raw_spin_unlock_irqrestore
// with type: void _raw_spin_unlock_irqrestore(raw_spinlock_t *, unsigned long)
// with return type: void
void _raw_spin_unlock_irqrestore(raw_spinlock_t *arg0, unsigned long arg1) {
  // Void type
  return;
}

// Function: abort_exclusive_wait
// with type: void abort_exclusive_wait(wait_queue_head_t *, wait_queue_t *, unsigned int, void *)
// with return type: void
void abort_exclusive_wait(wait_queue_head_t *arg0, wait_queue_t *arg1, unsigned int arg2, void *arg3) {
  // Void type
  return;
}

// Function: add_timer
// with type: void add_timer(struct timer_list *)
// with return type: void
void add_timer(struct timer_list *arg0) {
  // Void type
  return;
}

// Function: complete
// with type: void complete(struct completion *)
// with return type: void
void complete(struct completion *arg0) {
  // Void type
  return;
}

// Function: cpumask_of_node
// with type: const struct cpumask *cpumask_of_node(int)
// with return type: (struct cpumask)*
void *external_alloc(void);
const struct cpumask *cpumask_of_node(int arg0) {
  // Pointer type
  return (const struct cpumask *)external_alloc();
}

// Function: del_timer_sync
// with type: int del_timer_sync(struct timer_list *)
// with return type: int
int __VERIFIER_nondet_int(void);
int del_timer_sync(struct timer_list *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_err
// with type: int dev_err(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_err(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_set_name
// with type: int dev_set_name(struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_set_name(struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: dev_warn
// with type: int dev_warn(const struct device *, const char *, ...)
// with return type: int
int __VERIFIER_nondet_int(void);
int dev_warn(const struct device *arg0, const char *arg1, ...) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: find_first_bit
// with type: unsigned long int find_first_bit(const unsigned long *, unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int find_first_bit(const unsigned long *arg0, unsigned long arg1) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: find_next_bit
// with type: unsigned long int find_next_bit(const unsigned long *, unsigned long, unsigned long)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int find_next_bit(const unsigned long *arg0, unsigned long arg1, unsigned long arg2) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: finish_wait
// with type: void finish_wait(wait_queue_head_t *, wait_queue_t *)
// with return type: void
void finish_wait(wait_queue_head_t *arg0, wait_queue_t *arg1) {
  // Void type
  return;
}

// Function: free_irq
// with type: void free_irq(unsigned int, void *)
// with return type: void
void free_irq(unsigned int arg0, void *arg1) {
  // Void type
  return;
}

// Function: free_pages
// with type: void free_pages(unsigned long, unsigned int)
// with return type: void
void free_pages(unsigned long arg0, unsigned int arg1) {
  // Void type
  return;
}

// Function: get_online_cpus
// with type: void get_online_cpus()
// with return type: void
void get_online_cpus() {
  // Void type
  return;
}

// Function: gru_create_message_queue
// with type: int gru_create_message_queue(struct gru_message_queue_desc *, void *, unsigned int, int, int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int gru_create_message_queue(struct gru_message_queue_desc *arg0, void *arg1, unsigned int arg2, int arg3, int arg4, int arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: gru_free_message
// with type: void gru_free_message(struct gru_message_queue_desc *, void *)
// with return type: void
void gru_free_message(struct gru_message_queue_desc *arg0, void *arg1) {
  // Void type
  return;
}

// Function: gru_get_next_message
// with type: void *gru_get_next_message(struct gru_message_queue_desc *)
// with return type: (void)*
void *external_alloc(void);
void *gru_get_next_message(struct gru_message_queue_desc *arg0) {
  // Pointer type
  return (void *)external_alloc();
}

// Function: gru_send_message_gpa
// with type: int gru_send_message_gpa(struct gru_message_queue_desc *, void *, unsigned int)
// with return type: int
int __VERIFIER_nondet_int(void);
int gru_send_message_gpa(struct gru_message_queue_desc *arg0, void *arg1, unsigned int arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: init_timer_key
// with type: void init_timer_key(struct timer_list *, unsigned int, const char *, struct lock_class_key *)
// with return type: void
void init_timer_key(struct timer_list *arg0, unsigned int arg1, const char *arg2, struct lock_class_key *arg3) {
  // Void type
  return;
}

// Function: interruptible_sleep_on_timeout
// with type: long int interruptible_sleep_on_timeout(wait_queue_head_t *, long)
// with return type: long int
long __VERIFIER_nondet_long(void);
long int interruptible_sleep_on_timeout(wait_queue_head_t *arg0, long arg1) {
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: is_uv_system
// with type: int is_uv_system()
// with return type: int
int __VERIFIER_nondet_int(void);
int is_uv_system() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: kfree

// Function: kthread_create_on_node
// with type: struct task_struct *kthread_create_on_node(int (*)(void *), void *, int, const char *, ...)
// with return type: (struct task_struct)*
void *external_alloc(void);
struct task_struct *kthread_create_on_node(int (*arg0)(void *), void *arg1, int arg2, const char *arg3, ...) {
  // Pointer type
  return (struct task_struct *)external_alloc();
}

// Function: ldv_xpc_arch_ops_uv_probe_1
// with type: int ldv_xpc_arch_ops_uv_probe_1()
// with return type: int
int __VERIFIER_nondet_int(void);
int ldv_xpc_arch_ops_uv_probe_1() {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Skip function: malloc

// Skip function: memset

// Function: msleep_interruptible
// with type: unsigned long int msleep_interruptible(unsigned int)
// with return type: unsigned long int
unsigned long __VERIFIER_nondet_ulong(void);
unsigned long int msleep_interruptible(unsigned int arg0) {
  // Simple type
  return __VERIFIER_nondet_ulong();
}

// Function: mutex_lock
// with type: void mutex_lock(struct mutex *)
// with return type: void
void mutex_lock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: mutex_trylock
// with type: int mutex_trylock(struct mutex *)
// with return type: int
int __VERIFIER_nondet_int(void);
int mutex_trylock(struct mutex *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: mutex_unlock
// with type: void mutex_unlock(struct mutex *)
// with return type: void
void mutex_unlock(struct mutex *arg0) {
  // Void type
  return;
}

// Function: prepare_to_wait
// with type: void prepare_to_wait(wait_queue_head_t *, wait_queue_t *, int)
// with return type: void
void prepare_to_wait(wait_queue_head_t *arg0, wait_queue_t *arg1, int arg2) {
  // Void type
  return;
}

// Function: prepare_to_wait_exclusive
// with type: void prepare_to_wait_exclusive(wait_queue_head_t *, wait_queue_t *, int)
// with return type: void
void prepare_to_wait_exclusive(wait_queue_head_t *arg0, wait_queue_t *arg1, int arg2) {
  // Void type
  return;
}

// Function: put_online_cpus
// with type: void put_online_cpus()
// with return type: void
void put_online_cpus() {
  // Void type
  return;
}

// Function: register_die_notifier
// with type: int register_die_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_die_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: register_reboot_notifier
// with type: int register_reboot_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int register_reboot_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: register_sysctl_table
// with type: struct ctl_table_header *register_sysctl_table(struct ctl_table *)
// with return type: (struct ctl_table_header)*
void *external_alloc(void);
struct ctl_table_header *register_sysctl_table(struct ctl_table *arg0) {
  // Pointer type
  return (struct ctl_table_header *)external_alloc();
}

// Function: request_threaded_irq
// with type: int request_threaded_irq(unsigned int, irqreturn_t (*)(int, void *), irqreturn_t (*)(int, void *), unsigned long, const char *, void *)
// with return type: int
int __VERIFIER_nondet_int(void);
int request_threaded_irq(unsigned int arg0, irqreturn_t (*arg1)(int, void *), irqreturn_t (*arg2)(int, void *), unsigned long arg3, const char *arg4, void *arg5) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: schedule
// with type: void schedule()
// with return type: void
void schedule() {
  // Void type
  return;
}

// Function: set_cpus_allowed_ptr
// with type: int set_cpus_allowed_ptr(struct task_struct *, const struct cpumask *)
// with return type: int
int __VERIFIER_nondet_int(void);
int set_cpus_allowed_ptr(struct task_struct *arg0, const struct cpumask *arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: unregister_die_notifier
// with type: int unregister_die_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int unregister_die_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: unregister_reboot_notifier
// with type: int unregister_reboot_notifier(struct notifier_block *)
// with return type: int
int __VERIFIER_nondet_int(void);
int unregister_reboot_notifier(struct notifier_block *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: unregister_sysctl_table
// with type: void unregister_sysctl_table(struct ctl_table_header *)
// with return type: void
void unregister_sysctl_table(struct ctl_table_header *arg0) {
  // Void type
  return;
}

// Function: uv_bios_mq_watchlist_alloc
// with type: int uv_bios_mq_watchlist_alloc(unsigned long, unsigned int, unsigned long *)
// with return type: int
int __VERIFIER_nondet_int(void);
int uv_bios_mq_watchlist_alloc(unsigned long arg0, unsigned int arg1, unsigned long *arg2) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uv_bios_mq_watchlist_free
// with type: int uv_bios_mq_watchlist_free(int, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int uv_bios_mq_watchlist_free(int arg0, int arg1) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uv_bios_reserved_page_pa
// with type: s64 uv_bios_reserved_page_pa(u64 , u64 *, u64 *, u64 *)
// with return type: s64 
long __VERIFIER_nondet_long(void);
s64 uv_bios_reserved_page_pa(u64 arg0, u64 *arg1, u64 *arg2, u64 *arg3) {
  // Typedef type
  // Real type: long long
  // Simple type
  return __VERIFIER_nondet_long();
}

// Function: uv_setup_irq
// with type: int uv_setup_irq(char *, int, int, unsigned long, int)
// with return type: int
int __VERIFIER_nondet_int(void);
int uv_setup_irq(char *arg0, int arg1, int arg2, unsigned long arg3, int arg4) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: uv_teardown_irq
// with type: void uv_teardown_irq(unsigned int)
// with return type: void
void uv_teardown_irq(unsigned int arg0) {
  // Void type
  return;
}

// Function: wait_for_completion
// with type: void wait_for_completion(struct completion *)
// with return type: void
void wait_for_completion(struct completion *arg0) {
  // Void type
  return;
}

// Function: wake_up_process
// with type: int wake_up_process(struct task_struct *)
// with return type: int
int __VERIFIER_nondet_int(void);
int wake_up_process(struct task_struct *arg0) {
  // Simple type
  return __VERIFIER_nondet_int();
}

// Function: warn_slowpath_null
// with type: void warn_slowpath_null(const char *, const int)
// with return type: void
void warn_slowpath_null(const char *arg0, const int arg1) {
  // Void type
  return;
}

// Function: xpc_clear_interface
// with type: void xpc_clear_interface()
// with return type: void
void xpc_clear_interface() {
  // Void type
  return;
}

// Function: xpc_set_interface
// with type: void xpc_set_interface(void (*)(int), void (*)(int), enum xp_retval (*)(short, int, u32 , void *, u16 ), enum xp_retval (*)(short, int, u32 , void *, u16 , void (*)(enum xp_retval , short, int, void *), void *), void (*)(short, int, void *), enum xp_retval (*)(short, void *))
// with return type: void
void xpc_set_interface(void (*arg0)(int), void (*arg1)(int), enum xp_retval (*arg2)(short, int, u32 , void *, u16 ), enum xp_retval (*arg3)(short, int, u32 , void *, u16 , void (*)(enum xp_retval , short, int, void *), void *), void (*arg4)(short, int, void *), enum xp_retval (*arg5)(short, void *)) {
  // Void type
  return;
}

