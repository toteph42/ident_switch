ALTER TABLE
  `ident_switch`
ADD COLUMN
	`drafts_mbox`
        varchar(64),
ADD COLUMN
	`sent_mbox`
        varchar(64),
ADD COLUMN
	`junk_mbox`
        varchar(64),
ADD COLUMN
	`trash_mbox`
        varchar(64);
