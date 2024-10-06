const std = @import("std");
const Application = @This();

const c = @cImport({
    @cInclude("QtC5/application.h");
});

pub fn init() *Application {
    return initWithArgs(std.os.argv);
}

pub fn initWithArgs(args: @TypeOf(std.os.argv)) *Application {
    return @ptrCast(c.QtC_Application_create(
        @intCast(args.len),
        @ptrCast(args.ptr),
    ));
}

pub fn exec(app: *Application) void {
    c.QtC_Application_exec(@ptrCast(app));
}
