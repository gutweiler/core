#ifndef IMAP_PROXY_H
#define IMAP_PROXY_H

void imap_proxy_reset(struct client *client);
int imap_proxy_parse_line(struct client *client, const char *line);

void imap_proxy_error(struct client *client, const char *text);
const char *imap_proxy_get_state(struct client *client);

#endif
