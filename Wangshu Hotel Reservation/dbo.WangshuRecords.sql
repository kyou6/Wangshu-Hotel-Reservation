CREATE TABLE [dbo].[WangshuRecords] (
    [Id]           INT          IDENTITY (1, 1) NOT NULL,
    [lastName]     VARCHAR (50) NOT NULL,
    [firstName]    VARCHAR (50) NOT NULL,
    [middleName]   VARCHAR (50) NULL,
    [contactNo]    VARCHAR (50) NOT NULL,
    [phoneNo]      VARCHAR (50) NULL,
    [email]        VARCHAR (50) NOT NULL,
    [country]      VARCHAR (50) NOT NULL,
    [region]       VARCHAR (50) NOT NULL,
    [city]         VARCHAR (50) NOT NULL,
    [zip]          VARCHAR (50) NOT NULL,
    [compAddress]  VARCHAR (50) NOT NULL,
    [roomType]     VARCHAR (50) NOT NULL,
    [roomPricing]  VARCHAR (50) NOT NULL,
    [dateCheckIn]  VARCHAR (50) NOT NULL,
    [dateCheckOut] VARCHAR (50) NOT NULL,
    [totalPricing] VARCHAR (50) NOT NULL,
    [payment]      VARCHAR (50) DEFAULT ((0)) NOT NULL,
    PRIMARY KEY CLUSTERED ([Id] ASC)
);

