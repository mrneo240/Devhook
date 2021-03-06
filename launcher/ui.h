#ifndef __UI_H__
#define __UI_H__

// key_wait()
#define SENSE_KEY (PSP_CTRL_CIRCLE|PSP_CTRL_TRIANGLE|PSP_CTRL_CROSS|PSP_CTRL_SQUARE|PSP_CTRL_START|PSP_CTRL_SELECT)

#define ALL_ALLOW    (PSP_CTRL_UP|PSP_CTRL_RIGHT|PSP_CTRL_DOWN|PSP_CTRL_LEFT)
#define ALL_BUTTON   (PSP_CTRL_TRIANGLE|PSP_CTRL_CIRCLE|PSP_CTRL_CROSS|PSP_CTRL_SQUARE)
#define ALL_TRIGGER  (PSP_CTRL_LTRIGGER|PSP_CTRL_RTRIGGER)
#define ALL_FUNCTION (PSP_CTRL_SELECT|PSP_CTRL_START|PSP_CTRL_HOME|PSP_CTRL_HOLD|PSP_CTRL_NOTE)
#define ALL_CTRL     (ALL_ALLOW|ALL_BUTTON|ALL_TRIGGER|ALL_FUNCTION)

#define IGR_BASE   (PSP_CTRL_LTRIGGER|PSP_CTRL_RTRIGGER)
#define IGR_RESET  (IGR_BASE|PSP_CTRL_HOME)
#define IGR_RETURN (IGR_BASE|PSP_CTRL_START)
#define IGR_LOGON  (IGR_BASE|PSP_CTRL_SELECT)

int get_key(void);
int wait_key(void);
int hold_button(int buttons_mask,int buttons,int timeout_msec);
int wait_hold_button(int buttons,int timeout_msec);

int selitem(int sx,int sy,const char *title,const char **list,int def);

char *add_file_list(const char *dir_path,char **file_list,char **full_list,char *buf,char *ext);

#endif
