ALTER TABLE
  `ident_switch`
CHANGE
  `host`
  `imap_host` varchar(64);

ALTER TABLE
  `ident_switch`
CHANGE
  `port`
  `imap_port` int;

ALTER TABLE
  `ident_switch`
ADD COLUMN
	`smtp_host`
    varchar(64);

ALTER TABLE
  `ident_switch`
ADD COLUMN
  `smtp_port`
		int
		CHECK(`smtp_port` > 0 AND `smtp_port` <= 65535);

ALTER TABLE
  `ident_switch`
DROP COLUMN
  `delimiter`;