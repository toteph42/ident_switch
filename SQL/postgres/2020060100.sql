ALTER TABLE
  ident_switch
ADD COLUMN
	smtp_auth
        smallint
        NOT NULL
        DEFAULT(1);
