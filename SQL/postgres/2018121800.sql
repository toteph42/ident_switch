ALTER TABLE
  ident_switch
RENAME COLUMN
  host
TO
  imap_host;

ALTER TABLE
  ident_switch
RENAME COLUMN
  port
TO
  imap_port;

ALTER TABLE
  ident_switch
ADD COLUMN
	smtp_host
    varchar(64);

ALTER TABLE
  ident_switch
ADD COLUMN
  smtp_port
		integer
		CHECK(smtp_port > 0 AND smtp_port <= 65535);

ALTER TABLE
  ident_switch
DROP COLUMN
  delimiter;